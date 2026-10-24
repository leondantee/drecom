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

// Function: entry_001498b8
// Address: 0x1498b8 - 0x149930
void entry_001498b8_0x1498b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001498b8_0x1498b8");
#endif

    ctx->pc = 0x1498b8u;

    // 0x1498b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1498bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1498c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1498C0u;
    {
        const bool branch_taken_0x1498c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1498c0) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x1498C8u;
    // 0x1498c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1498cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498d0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1498d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1498d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1498d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1498dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1498e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498e4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1498e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1498e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1498ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1498f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1498f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1498f8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1498fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149900: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x149904: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149908: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14990c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x149910: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149914: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x149918: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14991c: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x14991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149920: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149924: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149928: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14992c: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x14992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
    ctx->pc = 0x149930u;
}
