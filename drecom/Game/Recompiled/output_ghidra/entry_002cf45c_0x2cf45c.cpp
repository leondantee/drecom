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

// Function: entry_002cf45c
// Address: 0x2cf45c - 0x2cf4b0
void entry_002cf45c_0x2cf45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf45c_0x2cf45c");
#endif

    ctx->pc = 0x2cf45cu;

    // 0x2cf45c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf460: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf468: 0x8c6501c8  lw          $a1, 0x1C8($v1)
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x2cf46c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf470: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf474: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf478: 0xac6501cc  sw          $a1, 0x1CC($v1)
    ctx->pc = 0x2cf478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 5));
    // 0x2cf47c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2cf480: 0xa4208318  sh          $zero, -0x7CE8($at)
    ctx->pc = 0x2cf480u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x398318u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x398318u, _value); } while (0);
    // 0x2cf484: 0x343c  dsll32      $a2, $zero, 16
    ctx->pc = 0x2cf484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 16));
    // 0x2cf488: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2cf488u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2cf48c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2cf490: 0xa4268314  sh          $a2, -0x7CEC($at)
    ctx->pc = 0x2cf490u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x398314u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x398314u, _value); } while (0);
    // 0x2cf494: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x2cf494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x2cf498: 0xa4208316  sh          $zero, -0x7CEA($at)
    ctx->pc = 0x2cf498u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x398316u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x398316u, _value); } while (0);
    // 0x2cf49c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cf4a0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf4a4: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf4a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf4ac: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
    ctx->pc = 0x2cf4b0u;
}
