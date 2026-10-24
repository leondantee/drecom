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

// Function: caseD_8
// Address: 0x20944c - 0x2094a0
void caseD_8_0x20944c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x20944c");
#endif

    ctx->pc = 0x20944cu;

    // 0x20944c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x209450: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x209450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x209454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x209454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209458: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20945c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x20945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x209460: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209464: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x209464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x209468: 0x34a60002  ori         $a2, $a1, 0x2
    ctx->pc = 0x209468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x20946c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x20946cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x209470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209474: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209478: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x209478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20947c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x209480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209484: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x209484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x209488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20948c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x20948cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x209490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209494: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x209494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x209498: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20949c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x20949cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2094a0u;
}
