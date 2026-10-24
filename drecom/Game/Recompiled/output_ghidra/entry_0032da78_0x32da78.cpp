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

// Function: entry_0032da78
// Address: 0x32da78 - 0x32da98
void entry_0032da78_0x32da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032da78_0x32da78");
#endif

    ctx->pc = 0x32da78u;

    // 0x32da78: 0x92222906  lbu         $v0, 0x2906($s1)
    ctx->pc = 0x32da78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10502)));
    // 0x32da7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32da80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32da84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DA84u;
    {
        const bool branch_taken_0x32da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32da84) {
            ctx->pc = 0x32DA98u;
            return;
        }
    }
    ctx->pc = 0x32DA8Cu;
    // 0x32da8c: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32da94: 0xa2222907  sb          $v0, 0x2907($s1)
    ctx->pc = 0x32da94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x32da98u;
}
