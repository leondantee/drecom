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

// Function: entry_003145dc
// Address: 0x3145dc - 0x3146e8
void entry_003145dc_0x3145dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003145dc_0x3145dc");
#endif

    ctx->pc = 0x3145dcu;

    // 0x3145dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3145e0: 0x2472a610  addiu       $s2, $v1, -0x59F0
    ctx->pc = 0x3145e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x3145e4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3145ec: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3145ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3145f0: 0x1203003d  beq         $s0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3145F0u;
    {
        const bool branch_taken_0x3145f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3145f0) {
            ctx->pc = 0x3146E8u;
            return;
        }
    }
    ctx->pc = 0x3145F8u;
    // 0x3145f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3145fc: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x3145fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x314600: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x314604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314608: 0x0  nop
    ctx->pc = 0x314608u;
    // NOP
    // 0x31460c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314610: 0x3c033f68  lui         $v1, 0x3F68
    ctx->pc = 0x314610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
    // 0x314614: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x314614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x314618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31461c: 0x0  nop
    ctx->pc = 0x31461cu;
    // NOP
    // 0x314620: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x314620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x314624: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x314628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31462c: 0x0  nop
    ctx->pc = 0x31462cu;
    // NOP
    // 0x314630: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x314630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x314634: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x314634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x314638: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x314638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x31463c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31463cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314640: 0x0  nop
    ctx->pc = 0x314640u;
    // NOP
    // 0x314644: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x314644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x314648: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x314648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31464c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31464cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314650: 0x0  nop
    ctx->pc = 0x314650u;
    // NOP
    // 0x314654: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x314654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x314658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31465c: 0x0  nop
    ctx->pc = 0x31465cu;
    // NOP
    // 0x314660: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x314660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x314664: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31466c: 0x0  nop
    ctx->pc = 0x31466cu;
    // NOP
    // 0x314670: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x314670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x314674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314678: 0x0  nop
    ctx->pc = 0x314678u;
    // NOP
    // 0x31467c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x31467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x314680: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314688: 0x0  nop
    ctx->pc = 0x314688u;
    // NOP
    // 0x31468c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x31468cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x314690: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314698: 0x0  nop
    ctx->pc = 0x314698u;
    // NOP
    // 0x31469c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x31469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3146a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3146a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146a8: 0x0  nop
    ctx->pc = 0x3146a8u;
    // NOP
    // 0x3146ac: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3146acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3146b0: 0x3c033d44  lui         $v1, 0x3D44
    ctx->pc = 0x3146b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15684 << 16));
    // 0x3146b4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x3146b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x3146b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146bc: 0x0  nop
    ctx->pc = 0x3146bcu;
    // NOP
    // 0x3146c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x3146c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x3146c4: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x3146c8: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x3146c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x3146cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146d0: 0x0  nop
    ctx->pc = 0x3146d0u;
    // NOP
    // 0x3146d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x3146d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x3146d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3146d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3146dc: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x3146dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x3146e0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3146e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3146e4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x3146e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x3146e8u;
}
