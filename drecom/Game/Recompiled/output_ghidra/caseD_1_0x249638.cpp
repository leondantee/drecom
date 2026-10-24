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

// Function: caseD_1
// Address: 0x249638 - 0x249700
void caseD_1_0x249638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x249638");
#endif

    switch (ctx->pc) {
        case 0x249644u: goto label_249644;
        case 0x249668u: goto label_249668;
        case 0x24968cu: goto label_24968c;
        case 0x2496acu: goto label_2496ac;
        case 0x2496dcu: goto label_2496dc;
        default: break;
    }

    ctx->pc = 0x249638u;

    // 0x249638: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24963c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24963Cu;
    SET_GPR_U32(ctx, 31, 0x249644u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249644u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249644u) { return; }
    ctx->pc = 0x249644u;
label_249644:
    // 0x249644: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249648: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x249648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24964c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x24964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x249650: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x249650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x249654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249658: 0x0  nop
    ctx->pc = 0x249658u;
    // NOP
    // 0x24965c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24965cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x249660: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249660u;
    SET_GPR_U32(ctx, 31, 0x249668u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249660u, 0x249668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249668u;
label_249668:
    // 0x249668: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24966c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x24966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x249670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249674: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x249674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249678: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24967c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249680: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x249680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249684: 0xc040ce4  jal         func_103390
    ctx->pc = 0x249684u;
    SET_GPR_U32(ctx, 31, 0x24968Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24968Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24968Cu) { return; }
    ctx->pc = 0x24968Cu;
label_24968c:
    // 0x24968c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249690: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x249690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249694: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x249698: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24969c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2496a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2496a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2496a4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2496A4u;
    SET_GPR_U32(ctx, 31, 0x2496ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2496ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2496ACu) { return; }
    ctx->pc = 0x2496ACu;
label_2496ac:
    // 0x2496ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2496b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2496b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2496b4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2496b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2496b8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2496b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2496bc: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x2496bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2496c0: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2496c4: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x2496c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2496c8: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x2496c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2496cc: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x2496d0: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2496d4: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2496D4u;
    SET_GPR_U32(ctx, 31, 0x2496DCu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2496D4u, 0x2496DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496DCu;
label_2496dc:
    // 0x2496dc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2496dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2496e0: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x2496e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2496e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2496E4u;
    {
        const bool branch_taken_0x2496e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496e4) {
            ctx->pc = 0x249700u;
            return;
        }
    }
    ctx->pc = 0x2496ECu;
    // 0x2496ec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2496f0: 0x8465002c  lh          $a1, 0x2C($v1)
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2496f4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2496f8: 0xa464002c  sh          $a0, 0x2C($v1)
    ctx->pc = 0x2496f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x2496fc: 0x0  nop
    ctx->pc = 0x2496fcu;
    // NOP
    ctx->pc = 0x249700u;
}
