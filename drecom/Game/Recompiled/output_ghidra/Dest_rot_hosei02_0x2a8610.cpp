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

// Function: Dest_rot_hosei02
// Address: 0x2a8610 - 0x2a86fc
void Dest_rot_hosei02_0x2a8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_rot_hosei02_0x2a8610");
#endif

    switch (ctx->pc) {
        case 0x2a869cu: goto label_2a869c;
        case 0x2a86e4u: goto label_2a86e4;
        default: break;
    }

    ctx->pc = 0x2a8610u;

    // 0x2a8610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8614: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a8614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a8618: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a8618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a861c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a8620: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8624: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x2a8624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a8628: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A8628u;
    {
        const bool branch_taken_0x2a8628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8628) {
            ctx->pc = 0x2A86ECu;
            goto label_2a86ec;
        }
    }
    ctx->pc = 0x2A8630u;
    // 0x2a8630: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a8630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a8634: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8638: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x2a8638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a863c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a863cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a8640: 0x38630011  xori        $v1, $v1, 0x11
    ctx->pc = 0x2a8640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
    // 0x2a8644: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a8648: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a8648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a864c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8650: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x2a8650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a8654: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A8654u;
    {
        const bool branch_taken_0x2a8654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8654) {
            ctx->pc = 0x2A86ECu;
            goto label_2a86ec;
        }
    }
    ctx->pc = 0x2A865Cu;
    // 0x2a865c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a8660: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8664: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8668: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a8668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a866c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2a866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8670: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a8670u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8674: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2a8674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2a8678: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2a867c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a867cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8680: 0x0  nop
    ctx->pc = 0x2a8680u;
    // NOP
    // 0x2a8684: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a8684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a8688: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a868c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2a868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8690: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a8690u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8694: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A8694u;
    SET_GPR_U32(ctx, 31, 0x2A869Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A8694u, 0x2A869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A869Cu;
label_2a869c:
    // 0x2a869c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a86a0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2a86a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2a86a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a86a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a86ac: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2a86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a86b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a86b4: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x2a86b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a86b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a86bc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2a86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2a86c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2a86c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a86c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a86c8: 0x0  nop
    ctx->pc = 0x2a86c8u;
    // NOP
    // 0x2a86cc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a86ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a86d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a86d4: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x2a86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a86d8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a86d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a86dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A86DCu;
    SET_GPR_U32(ctx, 31, 0x2A86E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A86DCu, 0x2A86E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86E4u;
label_2a86e4:
    // 0x2a86e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a86e8: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x2a86e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_2a86ec:
    // 0x2a86ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a86ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a86f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a86f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A86F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A86F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A86FCu;
}
