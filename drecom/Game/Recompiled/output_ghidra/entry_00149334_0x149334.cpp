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

// Function: entry_00149334
// Address: 0x149334 - 0x1493c8
void entry_00149334_0x149334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149334_0x149334");
#endif

    switch (ctx->pc) {
        case 0x149348u: goto label_149348;
        case 0x149354u: goto label_149354;
        case 0x149374u: goto label_149374;
        default: break;
    }

    ctx->pc = 0x149334u;

    // 0x149334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149338: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14933c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x149340: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x149340u;
    SET_GPR_U32(ctx, 31, 0x149348u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149340u, 0x149348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149348u;
label_149348:
    // 0x149348: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14934c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14934Cu;
    SET_GPR_U32(ctx, 31, 0x149354u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14934Cu, 0x149354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149354u;
label_149354:
    // 0x149354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149358: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x149358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14935c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x149360: 0x2861008f  slti        $at, $v1, 0x8F
    ctx->pc = 0x149360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)143) ? 1 : 0);
    // 0x149364: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x149364u;
    {
        const bool branch_taken_0x149364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149364) {
            ctx->pc = 0x1493C8u;
            return;
        }
    }
    ctx->pc = 0x14936Cu;
    // 0x14936c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14936Cu;
    SET_GPR_U32(ctx, 31, 0x149374u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14936Cu, 0x149374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149374u;
label_149374:
    // 0x149374: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x149374u;
    {
        const bool branch_taken_0x149374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149374) {
            ctx->pc = 0x1493C8u;
            return;
        }
    }
    ctx->pc = 0x14937Cu;
    // 0x14937c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x149380: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149384: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x149388: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14938c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x149390: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x149394: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149398: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14939c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493a0: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x1493a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1493a4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1493a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1493a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1493a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1493ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493b0: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x1493b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
    // 0x1493b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1493bc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1493bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1493c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1493C0u;
    {
        const bool branch_taken_0x1493c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493c0) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x1493C8u;
}
