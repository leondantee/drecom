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

// Function: entry_003376f4
// Address: 0x3376f4 - 0x337740
void entry_003376f4_0x3376f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003376f4_0x3376f4");
#endif

    ctx->pc = 0x3376f4u;

    // 0x3376f4: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3376f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3376f8: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x3376f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x3376fc: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3376fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337700: 0x9042008b  lbu         $v0, 0x8B($v0)
    ctx->pc = 0x337700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 139)));
    // 0x337704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x337704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337708: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x337708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33770c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x337710: 0x623006  srlv        $a2, $v0, $v1
    ctx->pc = 0x337710u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x337714: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x337714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337718: 0x9042008b  lbu         $v0, 0x8B($v0)
    ctx->pc = 0x337718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 139)));
    // 0x33771c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x337720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x337724: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337728: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x337728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33772c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x33772cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x337730: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x337730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x337734: 0x8c451a64  lw          $a1, 0x1A64($v0)
    ctx->pc = 0x337734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
    // 0x337738: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x337738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x33773c: 0xac461a64  sw          $a2, 0x1A64($v0)
    ctx->pc = 0x33773cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6756), GPR_U32(ctx, 6));
    ctx->pc = 0x337740u;
}
