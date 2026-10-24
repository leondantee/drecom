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

// Function: entry_0033a4d0
// Address: 0x33a4d0 - 0x33a56c
void entry_0033a4d0_0x33a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a4d0_0x33a4d0");
#endif

    ctx->pc = 0x33a4d0u;

    // 0x33a4d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a4d4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a4d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a4dc: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a4e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33a4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a4e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a4e8: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x33a4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a4f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a4f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a4f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a4f8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a4fc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a500: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a504: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x33a504u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x33a508: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a50c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a510: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a510u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a514: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a518: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a51c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a520: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33a520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33a524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a52c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a52cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a530: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a534: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a538: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a53c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a544: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a544u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a548: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a54c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a550: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x33a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x33a554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A554u;
    {
        const bool branch_taken_0x33a554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a554) {
            ctx->pc = 0x33A56Cu;
            return;
        }
    }
    ctx->pc = 0x33A55Cu;
    // 0x33a55c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33a55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a560: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a560u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a564: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a568: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33a56cu;
}
