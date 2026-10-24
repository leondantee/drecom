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

// Function: entry_0019ecbc
// Address: 0x19ecbc - 0x19ece0
void entry_0019ecbc_0x19ecbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ecbc_0x19ecbc");
#endif

    ctx->pc = 0x19ecbcu;

    // 0x19ecbc: 0x72a0f628  paddub      $fp, $s5, $zero
    ctx->pc = 0x19ecbcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x19ecc0: 0x97a300e0  lhu         $v1, 0xE0($sp)
    ctx->pc = 0x19ecc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19ecc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ecc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19eccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ECCCu;
    {
        const bool branch_taken_0x19eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eccc) {
            ctx->pc = 0x19ECE0u;
            return;
        }
    }
    ctx->pc = 0x19ECD4u;
    // 0x19ecd4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ecd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19ECD8u;
    {
        const bool branch_taken_0x19ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ecd8) {
            ctx->pc = 0x19ECE4u;
            return;
        }
    }
    ctx->pc = 0x19ECE0u;
}
