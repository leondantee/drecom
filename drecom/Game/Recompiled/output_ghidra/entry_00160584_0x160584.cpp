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

// Function: entry_00160584
// Address: 0x160584 - 0x160648
void entry_00160584_0x160584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160584_0x160584");
#endif

    ctx->pc = 0x160584u;

    // 0x160584: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x160588: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x16058c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160590: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160594: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x160598: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x16059c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1605a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1605a4: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1605a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1605a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1605ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1605b0: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x1605b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1605b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605b8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1605b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1605bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1605bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1605c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1605c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605c4: 0x0  nop
    ctx->pc = 0x1605c4u;
    // NOP
    // 0x1605c8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1605c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1605cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1605ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1605d0: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x1605d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1605d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605d8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1605d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1605dc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1605dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1605e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1605e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1605e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1605e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1605e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1605ec: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1605ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1605f0: 0x3c0244a8  lui         $v0, 0x44A8
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17576 << 16));
    // 0x1605f4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1605f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1605f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1605f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605fc: 0x0  nop
    ctx->pc = 0x1605fcu;
    // NOP
    // 0x160600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160604: 0x0  nop
    ctx->pc = 0x160604u;
    // NOP
    // 0x160608: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x160608u;
    {
        const bool branch_taken_0x160608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160608) {
            ctx->pc = 0x160648u;
            return;
        }
    }
    ctx->pc = 0x160610u;
    // 0x160610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160614: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160618: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16061c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16061cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160620: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160624: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160628: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16062c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x16062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160630: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x160630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160634: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160638: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16063c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160640: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160640u;
    {
        const bool branch_taken_0x160640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160640) {
            ctx->pc = 0x160678u;
            return;
        }
    }
    ctx->pc = 0x160648u;
}
