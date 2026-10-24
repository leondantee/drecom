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

// Function: Em0b_neck_move
// Address: 0x1fa0b0 - 0x1fa2a0
void Em0b_neck_move_0x1fa0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_neck_move_0x1fa0b0");
#endif

    switch (ctx->pc) {
        case 0x1fa110u: goto label_1fa110;
        case 0x1fa12cu: goto label_1fa12c;
        case 0x1fa14cu: goto label_1fa14c;
        case 0x1fa168u: goto label_1fa168;
        case 0x1fa234u: goto label_1fa234;
        case 0x1fa250u: goto label_1fa250;
        default: break;
    }

    ctx->pc = 0x1fa0b0u;

    // 0x1fa0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa0b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1fa0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fa0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa0bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fa0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fa0c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa0c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1fa0c8: 0x247039d0  addiu       $s0, $v1, 0x39D0
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x1fa0cc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa0d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa0d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fa0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fa0d8: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1FA0D8u;
    {
        const bool branch_taken_0x1fa0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0d8) {
            ctx->pc = 0x1FA28Cu;
            goto label_1fa28c;
        }
    }
    ctx->pc = 0x1FA0E0u;
    // 0x1fa0e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1fa0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa0e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa0e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fa0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fa0ec: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1FA0ECu;
    {
        const bool branch_taken_0x1fa0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0ec) {
            ctx->pc = 0x1FA268u;
            goto label_1fa268;
        }
    }
    ctx->pc = 0x1FA0F4u;
    // 0x1fa0f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa0f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1fa0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa0fc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa100: 0x24640970  addiu       $a0, $v1, 0x970
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2416));
    // 0x1fa104: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1fa104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa108: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1FA108u;
    SET_GPR_U32(ctx, 31, 0x1FA110u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1FA108u, 0x1FA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA110u;
label_1fa110:
    // 0x1fa110: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fa114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa118: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1fa118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa11c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa120: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1fa120u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fa124: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1FA124u;
    SET_GPR_U32(ctx, 31, 0x1FA12Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1FA124u, 0x1FA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA12Cu;
label_1fa12c:
    // 0x1fa12c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fa130: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fa130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa134: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1fa134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa138: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa13c: 0x24640970  addiu       $a0, $v1, 0x970
    ctx->pc = 0x1fa13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2416));
    // 0x1fa140: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1fa140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa144: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x1FA144u;
    SET_GPR_U32(ctx, 31, 0x1FA14Cu);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x1FA144u, 0x1FA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA14Cu;
label_1fa14c:
    // 0x1fa14c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fa150: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fa150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa154: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1fa154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa158: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa15c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1fa15cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fa160: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1FA160u;
    SET_GPR_U32(ctx, 31, 0x1FA168u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1FA160u, 0x1FA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA168u;
label_1fa168:
    // 0x1fa168: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fa16c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa170: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1fa170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa174: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fa178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa17c: 0x0  nop
    ctx->pc = 0x1fa17cu;
    // NOP
    // 0x1fa180: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA180u;
    {
        const bool branch_taken_0x1fa180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa180) {
            ctx->pc = 0x1FA194u;
            goto label_1fa194;
        }
    }
    ctx->pc = 0x1FA188u;
    // 0x1fa188: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa18c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa190: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa194:
    // 0x1fa194: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa198: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa19c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1fa19cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fa1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa1a8: 0x0  nop
    ctx->pc = 0x1fa1a8u;
    // NOP
    // 0x1fa1ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA1ACu;
    {
        const bool branch_taken_0x1fa1ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa1ac) {
            ctx->pc = 0x1FA1C4u;
            goto label_1fa1c4;
        }
    }
    ctx->pc = 0x1FA1B4u;
    // 0x1fa1b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa1bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa1c4:
    // 0x1fa1c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fa1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa1cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fa1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa1d4: 0x0  nop
    ctx->pc = 0x1fa1d4u;
    // NOP
    // 0x1fa1d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA1D8u;
    {
        const bool branch_taken_0x1fa1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa1d8) {
            ctx->pc = 0x1FA1ECu;
            goto label_1fa1ec;
        }
    }
    ctx->pc = 0x1FA1E0u;
    // 0x1fa1e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fa1ec:
    // 0x1fa1ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1f4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1fa1f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa1f8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fa1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa200: 0x0  nop
    ctx->pc = 0x1fa200u;
    // NOP
    // 0x1fa204: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA204u;
    {
        const bool branch_taken_0x1fa204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa204) {
            ctx->pc = 0x1FA21Cu;
            goto label_1fa21c;
        }
    }
    ctx->pc = 0x1FA20Cu;
    // 0x1fa20c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa210: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa214: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa218: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fa21c:
    // 0x1fa21c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa220: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1fa220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa224: 0xc60d011c  lwc1        $f13, 0x11C($s0)
    ctx->pc = 0x1fa224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa228: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x1fa228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa22c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1FA22Cu;
    SET_GPR_U32(ctx, 31, 0x1FA234u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1FA22Cu, 0x1FA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA234u;
label_1fa234:
    // 0x1fa234: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x1fa234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1fa238: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa23c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1fa23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa240: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x1fa240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa244: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x1fa244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa248: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1FA248u;
    SET_GPR_U32(ctx, 31, 0x1FA250u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1FA248u, 0x1FA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA250u;
label_1fa250:
    // 0x1fa250: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1fa250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1fa254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa258: 0x0  nop
    ctx->pc = 0x1fa258u;
    // NOP
    // 0x1fa25c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1fa25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1fa260: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA260u;
    {
        const bool branch_taken_0x1fa260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa260) {
            ctx->pc = 0x1FA28Cu;
            goto label_1fa28c;
        }
    }
    ctx->pc = 0x1FA268u;
label_1fa268:
    // 0x1fa268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa26c: 0x0  nop
    ctx->pc = 0x1fa26cu;
    // NOP
    // 0x1fa270: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x1fa270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1fa274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa278: 0x0  nop
    ctx->pc = 0x1fa278u;
    // NOP
    // 0x1fa27c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1fa27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1fa280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa284: 0x0  nop
    ctx->pc = 0x1fa284u;
    // NOP
    // 0x1fa288: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1fa288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_1fa28c:
    // 0x1fa28c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1fa28cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa294: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa298: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA2A0u;
}
