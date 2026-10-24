#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0025f518
// Address: 0x25f518 - 0x25f538
void entry_0025f518_0x25f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f518_0x25f518");
#endif

    ctx->pc = 0x25f518u;

    // 0x25f518: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25f518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25f51c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f520: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x25f524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F524u;
    {
        const bool branch_taken_0x25f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f524) {
            ctx->pc = 0x25F538u;
            return;
        }
    }
    ctx->pc = 0x25F52Cu;
    // 0x25f52c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f530: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f534: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25f538u;
}
