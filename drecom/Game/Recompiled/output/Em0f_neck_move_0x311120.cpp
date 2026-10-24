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

// Function: Em0f_neck_move
// Address: 0x311120 - 0x3113ec
void Em0f_neck_move_0x311120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_neck_move_0x311120");
#endif

    switch (ctx->pc) {
        case 0x311190u: goto label_311190;
        case 0x3111b8u: goto label_3111b8;
        case 0x3111ecu: goto label_3111ec;
        case 0x311208u: goto label_311208;
        case 0x3112a8u: goto label_3112a8;
        default: break;
    }

    ctx->pc = 0x311120u;

    // 0x311120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x311124: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x311124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x311128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31112c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x311130: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x311130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x311134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x311134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311138: 0x8c701310  lw          $s0, 0x1310($v1)
    ctx->pc = 0x311138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x31113c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311140: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x311140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x311144: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x311144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x311148: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31114c: 0x46000a1  bltz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x31114Cu;
    {
        const bool branch_taken_0x31114c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31114c) {
            ctx->pc = 0x3113D4u;
            goto label_3113d4;
        }
    }
    ctx->pc = 0x311154u;
    // 0x311154: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x311154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x311158: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x311158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31115c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31115cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x311160: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x311160u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x311164: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x311164u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x311168: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x311168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31116c: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x31116Cu;
    {
        const bool branch_taken_0x31116c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31116c) {
            ctx->pc = 0x311310u;
            goto label_311310;
        }
    }
    ctx->pc = 0x311174u;
    // 0x311174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x311174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311178: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x311178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31117c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x311180: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x311180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311184: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x311184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x311188: 0xc05cc90  jal         func_173240
    ctx->pc = 0x311188u;
    SET_GPR_U32(ctx, 31, 0x311190u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x311188u, 0x311190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311190u;
label_311190:
    // 0x311190: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x311190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x311194: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311194u;
    {
        const bool branch_taken_0x311194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311194) {
            ctx->pc = 0x3111C4u;
            goto label_3111c4;
        }
    }
    ctx->pc = 0x31119Cu;
    // 0x31119c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111a4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3111a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3111a8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3111a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3111ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3111acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3111b0: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3111B0u;
    SET_GPR_U32(ctx, 31, 0x3111B8u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3111B0u, 0x3111B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111B8u;
label_3111b8:
    // 0x3111b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3111b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3111bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3111BCu;
    {
        const bool branch_taken_0x3111bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111bc) {
            ctx->pc = 0x3111D8u;
            goto label_3111d8;
        }
    }
    ctx->pc = 0x3111C4u;
label_3111c4:
    // 0x3111c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3111c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3111c8: 0x0  nop
    ctx->pc = 0x3111c8u;
    // NOP
    // 0x3111cc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3111d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3111D0u;
    {
        const bool branch_taken_0x3111d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111d0) {
            ctx->pc = 0x31120Cu;
            goto label_31120c;
        }
    }
    ctx->pc = 0x3111D8u;
label_3111d8:
    // 0x3111d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3111d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111dc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3111e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3111e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3111e4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3111E4u;
    SET_GPR_U32(ctx, 31, 0x3111ECu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3111E4u, 0x3111ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111ECu;
label_3111ec:
    // 0x3111ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3111f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3111f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3111f4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3111f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3111f8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3111fc: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3111fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x311200: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x311200u;
    SET_GPR_U32(ctx, 31, 0x311208u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x311200u, 0x311208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311208u;
label_311208:
    // 0x311208: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x311208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_31120c:
    // 0x31120c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31120cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x311210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311214: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311218: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31121c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311220: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311224: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311228: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31122c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311230: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311238: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x311238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x31123c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31123cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311240: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x311240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311244: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311248: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311248u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31124c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311250: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311258: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31125c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31125cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311260: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x311260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311268: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x311268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x31126c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311270: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x311270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x311274: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x311274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x311278: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31127c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311284: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x311288: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x311288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31128c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x31128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x311290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311294: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x311294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311298: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x311298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31129c: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x31129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3112a0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3112A0u;
    SET_GPR_U32(ctx, 31, 0x3112A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3112A0u, 0x3112A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112A8u;
label_3112a8:
    // 0x3112a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3112a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3112ac: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3112acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3112b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3112b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3112b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3112c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3112c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3112c8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3112c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3112cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3112ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112d0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x3112d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3112d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3112d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3112d8: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3112d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3112dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3112dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3112e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3112e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3112ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3112f0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3112f4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3112f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3112f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3112fc: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x3112fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x311300: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x311300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x311304: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x311304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x311308: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x311308u;
    {
        const bool branch_taken_0x311308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311308) {
            ctx->pc = 0x3113D4u;
            goto label_3113d4;
        }
    }
    ctx->pc = 0x311310u;
label_311310:
    // 0x311310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311314: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311318: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31131c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31131cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311320: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311324: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31132c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311330: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311334: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31133c: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x31133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x311340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311344: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311348: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31134c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31134cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311350: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311354: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311358: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31135c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311360: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311364: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31136c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x311370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311374: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311378: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31137c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31137cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311380: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311384: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31138c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311390: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311394: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31139c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x31139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3113a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3113a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3113a4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3113a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3113a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3113a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3113ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3113acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3113b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3113b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3113b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3113b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3113b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3113b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3113bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3113c0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3113c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3113c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3113c8: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x3113c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x3113cc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3113ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3113d0: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x3113d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
label_3113d4:
    // 0x3113d4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3113d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3113d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3113d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3113dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3113dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3113e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3113e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3113e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3113E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3113E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3113ECu;
}
