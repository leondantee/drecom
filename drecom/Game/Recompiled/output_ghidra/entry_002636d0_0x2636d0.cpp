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

// Function: entry_002636d0
// Address: 0x2636d0 - 0x26376c
void entry_002636d0_0x2636d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002636d0_0x2636d0");
#endif

    ctx->pc = 0x2636d0u;

    // 0x2636d0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2636d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2636d4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2636d8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2636d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2636dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2636dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2636e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2636e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2636e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2636e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2636e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2636ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2636ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2636f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2636f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2636f4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2636f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2636f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2636fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263708: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26370c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x26370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x263710: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263714: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263718: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26371c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263724: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263728: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x263728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26372c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x263730: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263734: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26373c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26373cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263740: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263744: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x263744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263748: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x263748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26374c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263750: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263750u;
    {
        const bool branch_taken_0x263750 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263750) {
            ctx->pc = 0x26376Cu;
            return;
        }
    }
    ctx->pc = 0x263758u;
    // 0x263758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26375c: 0x0  nop
    ctx->pc = 0x26375cu;
    // NOP
    // 0x263760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263764u;
    {
        const bool branch_taken_0x263764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263764) {
            ctx->pc = 0x263788u;
            return;
        }
    }
    ctx->pc = 0x26376Cu;
}
