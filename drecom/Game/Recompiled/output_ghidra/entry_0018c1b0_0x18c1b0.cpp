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

// Function: entry_0018c1b0
// Address: 0x18c1b0 - 0x18c1fc
void entry_0018c1b0_0x18c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c1b0_0x18c1b0");
#endif

    ctx->pc = 0x18c1b0u;

    // 0x18c1b0: 0x9202013f  lbu         $v0, 0x13F($s0)
    ctx->pc = 0x18c1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 319)));
    // 0x18c1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c1b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18C1B8u;
    {
        const bool branch_taken_0x18c1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c1b8) {
            ctx->pc = 0x18C1FCu;
            return;
        }
    }
    ctx->pc = 0x18C1C0u;
    // 0x18c1c0: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c1c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c1c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18c1c8: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c1cc: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x18c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c1d0: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x18c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x18c1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1d8: 0x0  nop
    ctx->pc = 0x18c1d8u;
    // NOP
    // 0x18c1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c1e0: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x18c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x18c1e4: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x18c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c1e8: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x18c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x18c1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1f0: 0x0  nop
    ctx->pc = 0x18c1f0u;
    // NOP
    // 0x18c1f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c1f8: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x18c1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    ctx->pc = 0x18c1fcu;
}
