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

// Function: caseD_2
// Address: 0x31cf8c - 0x31cff8
void caseD_2_0x31cf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x31cf8c");
#endif

    ctx->pc = 0x31cf8cu;

    // 0x31cf8c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cf90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cf98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf9c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x31cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x31cfa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cfa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cfac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfb0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31cfb4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31cfb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31cfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cfc0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfc4: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x31cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x31cfc8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfcc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cfd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31cfd4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31cfd8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfdc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31cfe0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31cfe4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31cfe8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cfec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31cfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31cff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31cff4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31cff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31cff8u;
}
