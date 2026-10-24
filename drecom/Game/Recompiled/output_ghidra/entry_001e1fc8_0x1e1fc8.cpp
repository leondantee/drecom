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

// Function: entry_001e1fc8
// Address: 0x1e1fc8 - 0x1e2028
void entry_001e1fc8_0x1e1fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1fc8_0x1e1fc8");
#endif

    ctx->pc = 0x1e1fc8u;

    // 0x1e1fc8: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1e1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1fcc: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1fd4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e1fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e1fd8: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1e1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1fdc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e1fe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e1fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fe8: 0x0  nop
    ctx->pc = 0x1e1fe8u;
    // NOP
    // 0x1e1fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e1fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e1ff0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e1ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e1ff4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1ff8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e1ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2000: 0x0  nop
    ctx->pc = 0x1e2000u;
    // NOP
    // 0x1e2004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e2004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2008: 0x0  nop
    ctx->pc = 0x1e2008u;
    // NOP
    // 0x1e200c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E200Cu;
    {
        const bool branch_taken_0x1e200c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e200c) {
            ctx->pc = 0x1E2028u;
            return;
        }
    }
    ctx->pc = 0x1E2014u;
    // 0x1e2014: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2018: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e201c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2020: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2020u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2024: 0x0  nop
    ctx->pc = 0x1e2024u;
    // NOP
    ctx->pc = 0x1e2028u;
}
