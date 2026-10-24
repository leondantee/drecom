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

// Function: entry_003298d8
// Address: 0x3298d8 - 0x329988
void entry_003298d8_0x3298d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003298d8_0x3298d8");
#endif

    ctx->pc = 0x3298d8u;

    // 0x3298d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3298d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3298dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3298e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3298e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3298e4: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x3298E4u;
    {
        const bool branch_taken_0x3298e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3298e4) {
            ctx->pc = 0x329B00u;
            return;
        }
    }
    ctx->pc = 0x3298ECu;
    // 0x3298ec: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3298ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3298f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3298f4: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x3298f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3298f8: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3298f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3298fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3298fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329904: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x329904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x329908: 0x1420006a  bnez        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x329908u;
    {
        const bool branch_taken_0x329908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x329908) {
            ctx->pc = 0x329AB4u;
            return;
        }
    }
    ctx->pc = 0x329910u;
    // 0x329910: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329914: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329918: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x329918u;
    {
        const bool branch_taken_0x329918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329918) {
            ctx->pc = 0x329994u;
            return;
        }
    }
    ctx->pc = 0x329920u;
    // 0x329920: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329924: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32992c: 0x0  nop
    ctx->pc = 0x32992cu;
    // NOP
    // 0x329930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x329934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329938: 0x0  nop
    ctx->pc = 0x329938u;
    // NOP
    // 0x32993c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x32993Cu;
    {
        const bool branch_taken_0x32993c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32993c) {
            ctx->pc = 0x329988u;
            return;
        }
    }
    ctx->pc = 0x329944u;
    // 0x329944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329948: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x329948u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32994c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x32994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x329950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329954: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329954u;
    {
        const bool branch_taken_0x329954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329954) {
            ctx->pc = 0x329988u;
            return;
        }
    }
    ctx->pc = 0x32995Cu;
    // 0x32995c: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x32995cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x329960: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329964: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329968: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329968u;
    {
        const bool branch_taken_0x329968 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x329968) {
            ctx->pc = 0x329988u;
            return;
        }
    }
    ctx->pc = 0x329970u;
    // 0x329970: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329978: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x32997c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329980: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329984: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329988u;
}
