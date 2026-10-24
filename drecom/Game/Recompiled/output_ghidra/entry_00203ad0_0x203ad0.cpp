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

// Function: entry_00203ad0
// Address: 0x203ad0 - 0x203b10
void entry_00203ad0_0x203ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ad0_0x203ad0");
#endif

    ctx->pc = 0x203ad0u;

    // 0x203ad0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x203ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x203ad4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203ad8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x203ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x203adc: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x203ADCu;
    {
        const bool branch_taken_0x203adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203adc) {
            ctx->pc = 0x2037B8u;
            return;
        }
    }
    ctx->pc = 0x203AE4u;
    // 0x203ae4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x203ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203ae8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x203ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203aec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203af0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x203af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x203af4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203af8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203afc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x203afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203b00: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x203b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x203b04: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x203b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203b0c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x203b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    ctx->pc = 0x203b10u;
}
