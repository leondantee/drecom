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

// Function: entry_001b300c
// Address: 0x1b300c - 0x1b3058
void entry_001b300c_0x1b300c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b300c_0x1b300c");
#endif

    ctx->pc = 0x1b300cu;

    // 0x1b300c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3010: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3014: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3018: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b3018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b301c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3024: 0x0  nop
    ctx->pc = 0x1b3024u;
    // NOP
    // 0x1b3028: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1B3028u;
    {
        const bool branch_taken_0x1b3028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3028) {
            ctx->pc = 0x1B3058u;
            return;
        }
    }
    ctx->pc = 0x1B3030u;
    // 0x1b3030: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3034: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b3034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3038: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b303c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b3040: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3048: 0x0  nop
    ctx->pc = 0x1b3048u;
    // NOP
    // 0x1b304c: 0x4500010b  bc1f        . + 4 + (0x10B << 2)
    ctx->pc = 0x1B304Cu;
    {
        const bool branch_taken_0x1b304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b304c) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B3054u;
    // 0x1b3054: 0x0  nop
    ctx->pc = 0x1b3054u;
    // NOP
    ctx->pc = 0x1b3058u;
}
