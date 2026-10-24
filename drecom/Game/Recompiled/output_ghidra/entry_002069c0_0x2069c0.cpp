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

// Function: entry_002069c0
// Address: 0x2069c0 - 0x206a28
void entry_002069c0_0x2069c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002069c0_0x2069c0");
#endif

    ctx->pc = 0x2069c0u;

    // 0x2069c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069c4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2069c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2069c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2069c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2069cc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2069ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2069d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2069D0u;
    {
        const bool branch_taken_0x2069d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069d0) {
            ctx->pc = 0x206A58u;
            return;
        }
    }
    ctx->pc = 0x2069D8u;
    // 0x2069d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069dc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2069dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2069e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2069e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2069e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2069e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2069e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2069E8u;
    {
        const bool branch_taken_0x2069e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069e8) {
            ctx->pc = 0x206A28u;
            return;
        }
    }
    ctx->pc = 0x2069F0u;
    // 0x2069f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069f4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2069f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2069f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069fc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2069fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a04: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x206a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x206a08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x206a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a10: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a14: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x206a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x206a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x206a1c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x206a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x206a20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206A20u;
    {
        const bool branch_taken_0x206a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a20) {
            ctx->pc = 0x206A58u;
            return;
        }
    }
    ctx->pc = 0x206A28u;
}
