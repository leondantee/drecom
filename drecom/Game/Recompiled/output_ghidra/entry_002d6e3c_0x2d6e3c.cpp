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

// Function: entry_002d6e3c
// Address: 0x2d6e3c - 0x2d6e7c
void entry_002d6e3c_0x2d6e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6e3c_0x2d6e3c");
#endif

    ctx->pc = 0x2d6e3cu;

    // 0x2d6e3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6e44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6e48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d6e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d6e4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6E4Cu;
    {
        const bool branch_taken_0x2d6e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e4c) {
            ctx->pc = 0x2D6E7Cu;
            return;
        }
    }
    ctx->pc = 0x2D6E54u;
    // 0x2d6e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e58: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6e5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e64: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6e68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6e70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6e74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6E74u;
    {
        const bool branch_taken_0x2d6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e74) {
            ctx->pc = 0x2D6E9Cu;
            return;
        }
    }
    ctx->pc = 0x2D6E7Cu;
}
