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

// Function: entry_00158780
// Address: 0x158780 - 0x1587d4
void entry_00158780_0x158780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158780_0x158780");
#endif

    ctx->pc = 0x158780u;

    // 0x158780: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x158780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158784: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x158784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x158788: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x158788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15878c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15878Cu;
    {
        const bool branch_taken_0x15878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15878c) {
            ctx->pc = 0x1587D4u;
            return;
        }
    }
    ctx->pc = 0x158794u;
    // 0x158794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158798: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x158798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15879c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1587a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1587a4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1587a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1587a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1587ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1587acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1587b0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1587b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1587b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1587b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1587b8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1587b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1587bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1587bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1587c0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1587c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1587c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1587c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1587c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1587cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1587CCu;
    {
        const bool branch_taken_0x1587cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587cc) {
            ctx->pc = 0x1587F0u;
            return;
        }
    }
    ctx->pc = 0x1587D4u;
}
