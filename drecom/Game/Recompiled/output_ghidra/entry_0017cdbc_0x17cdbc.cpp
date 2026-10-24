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

// Function: entry_0017cdbc
// Address: 0x17cdbc - 0x17cdf8
void entry_0017cdbc_0x17cdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cdbc_0x17cdbc");
#endif

    ctx->pc = 0x17cdbcu;

    // 0x17cdbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cdc0: 0x942500cc  lhu         $a1, 0xCC($at)
    ctx->pc = 0x17cdc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17cdc4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x17cdc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17cdc8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x17cdcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CDCCu;
    {
        const bool branch_taken_0x17cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cdcc) {
            ctx->pc = 0x17CDF8u;
            return;
        }
    }
    ctx->pc = 0x17CDD4u;
    // 0x17cdd4: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17cdd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17cdd8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17cddc: 0xa38580a4  sb          $a1, -0x7F5C($gp)
    ctx->pc = 0x17cddcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934692), (uint8_t)GPR_U32(ctx, 5));
    // 0x17cde0: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17cde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17cde4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cde8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17cdec: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDECu;
    {
        const bool branch_taken_0x17cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17cdec) {
            ctx->pc = 0x17CDF8u;
            return;
        }
    }
    ctx->pc = 0x17CDF4u;
    // 0x17cdf4: 0xa38080a4  sb          $zero, -0x7F5C($gp)
    ctx->pc = 0x17cdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934692), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17cdf8u;
}
