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

// Function: entry_00249ce8
// Address: 0x249ce8 - 0x249d3c
void entry_00249ce8_0x249ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ce8_0x249ce8");
#endif

    switch (ctx->pc) {
        case 0x249d30u: goto label_249d30;
        default: break;
    }

    ctx->pc = 0x249ce8u;

    // 0x249ce8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249cec: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x249cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x249cf0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x249cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x249cf4: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x249cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x249cf8: 0x1460039b  bnez        $v1, . + 4 + (0x39B << 2)
    ctx->pc = 0x249CF8u;
    {
        const bool branch_taken_0x249cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249cf8) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x249D00u;
    // 0x249d00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x249d04: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249d08: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x249d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x249d0c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x249d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x249d10: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x249d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x249d14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x249d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249d18: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249d1c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x249d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x249d20: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x249d24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249d24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249d28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x249D28u;
    SET_GPR_U32(ctx, 31, 0x249D30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x249D28u, 0x249D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D30u;
label_249d30:
    // 0x249d30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249d30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249d34: 0x1000038c  b           . + 4 + (0x38C << 2)
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d34) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x249D3Cu;
}
