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

// Function: entry_001f4614
// Address: 0x1f4614 - 0x1f4670
void entry_001f4614_0x1f4614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4614_0x1f4614");
#endif

    ctx->pc = 0x1f4614u;

    // 0x1f4614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4618: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f461c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4620: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4624: 0x2841010f  slti        $at, $v0, 0x10F
    ctx->pc = 0x1f4624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)271) ? 1 : 0);
    // 0x1f4628: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F4628u;
    {
        const bool branch_taken_0x1f4628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4628) {
            ctx->pc = 0x1F4670u;
            return;
        }
    }
    ctx->pc = 0x1F4630u;
    // 0x1f4630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4634: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4638: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f463c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f463cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4640: 0x28410118  slti        $at, $v0, 0x118
    ctx->pc = 0x1f4640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)280) ? 1 : 0);
    // 0x1f4644: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F4644u;
    {
        const bool branch_taken_0x1f4644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4644) {
            ctx->pc = 0x1F4670u;
            return;
        }
    }
    ctx->pc = 0x1F464Cu;
    // 0x1f464c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4650: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4654: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4658: 0x3c023e61  lui         $v0, 0x3E61
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15969 << 16));
    // 0x1f465c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1f465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x1f4660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4664: 0x0  nop
    ctx->pc = 0x1f4664u;
    // NOP
    // 0x1f4668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f4668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f466c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1f4670u;
}
