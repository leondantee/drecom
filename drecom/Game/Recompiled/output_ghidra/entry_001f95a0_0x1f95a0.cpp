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

// Function: entry_001f95a0
// Address: 0x1f95a0 - 0x1f96dc
void entry_001f95a0_0x1f95a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f95a0_0x1f95a0");
#endif

    switch (ctx->pc) {
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f95d0u: goto label_1f95d0;
        case 0x1f95f0u: goto label_1f95f0;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f969cu: goto label_1f969c;
        default: break;
    }

    ctx->pc = 0x1f95a0u;

    // 0x1f95a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95a4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F95A4u;
    SET_GPR_U32(ctx, 31, 0x1F95ACu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F95ACu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F95ACu) { return; }
    ctx->pc = 0x1F95ACu;
label_1f95ac:
    // 0x1f95ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f95b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f95b4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1f95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1f95b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f95b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f95bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f95bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f95c0: 0x0  nop
    ctx->pc = 0x1f95c0u;
    // NOP
    // 0x1f95c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f95c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f95c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F95C8u;
    SET_GPR_U32(ctx, 31, 0x1F95D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F95C8u, 0x1F95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95D0u;
label_1f95d0:
    // 0x1f95d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f95d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f95d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f95e8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F95E8u;
    SET_GPR_U32(ctx, 31, 0x1F95F0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F95F0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F95F0u) { return; }
    ctx->pc = 0x1F95F0u;
label_1f95f0:
    // 0x1f95f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1f95f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f95f4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1f95f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f95f8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95fc: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F95FCu;
    SET_GPR_U32(ctx, 31, 0x1F9604u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F9604u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9604u) { return; }
    ctx->pc = 0x1F9604u;
label_1f9604:
    // 0x1f9604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9608: 0x0  nop
    ctx->pc = 0x1f9608u;
    // NOP
    // 0x1f960c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f9610: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f9610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f9614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9618: 0x0  nop
    ctx->pc = 0x1f9618u;
    // NOP
    // 0x1f961c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9624: 0x0  nop
    ctx->pc = 0x1f9624u;
    // NOP
    // 0x1f9628: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f962c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f962cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9634: 0x0  nop
    ctx->pc = 0x1f9634u;
    // NOP
    // 0x1f9638: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f963c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9640: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9644: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9648: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F9648u;
    SET_GPR_U32(ctx, 31, 0x1F9650u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F9650u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9650u) { return; }
    ctx->pc = 0x1F9650u;
label_1f9650:
    // 0x1f9650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9654: 0x0  nop
    ctx->pc = 0x1f9654u;
    // NOP
    // 0x1f9658: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f965c: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1f965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1f9660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9664: 0x0  nop
    ctx->pc = 0x1f9664u;
    // NOP
    // 0x1f9668: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1f9668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1f966c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f966cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9670: 0x0  nop
    ctx->pc = 0x1f9670u;
    // NOP
    // 0x1f9674: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1f9674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1f9678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9680: 0x0  nop
    ctx->pc = 0x1f9680u;
    // NOP
    // 0x1f9684: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f9684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1f9688: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f968c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f968cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9690: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1f9690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f9694: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F9694u;
    SET_GPR_U32(ctx, 31, 0x1F969Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F969Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F969Cu) { return; }
    ctx->pc = 0x1F969Cu;
label_1f969c:
    // 0x1f969c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1f969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f96a0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1f96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f96a4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1f96a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f96a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f96ac: 0x0  nop
    ctx->pc = 0x1f96acu;
    // NOP
    // 0x1f96b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f96b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f96b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f96b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f96b8: 0x0  nop
    ctx->pc = 0x1f96b8u;
    // NOP
    // 0x1f96bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F96BCu;
    {
        const bool branch_taken_0x1f96bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f96bc) {
            ctx->pc = 0x1F96DCu;
            return;
        }
    }
    ctx->pc = 0x1F96C4u;
    // 0x1f96c4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x1f96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1f96c8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96cc: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x1f96ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f96d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f96d4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96d8: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f96dcu;
}
