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

// Function: entry_0020b914
// Address: 0x20b914 - 0x20b9ec
void entry_0020b914_0x20b914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b914_0x20b914");
#endif

    switch (ctx->pc) {
        case 0x20b928u: goto label_20b928;
        case 0x20b934u: goto label_20b934;
        case 0x20b948u: goto label_20b948;
        case 0x20b954u: goto label_20b954;
        default: break;
    }

    ctx->pc = 0x20b914u;

    // 0x20b914: 0x8faa0188  lw          $t2, 0x188($sp)
    ctx->pc = 0x20b914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b918: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20b918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20b91c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b920: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20B920u;
    SET_GPR_U32(ctx, 31, 0x20B928u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20B920u, 0x20B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B928u;
label_20b928:
    // 0x20b928: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b92c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20B92Cu;
    SET_GPR_U32(ctx, 31, 0x20B934u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20B92Cu, 0x20B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B934u;
label_20b934:
    // 0x20b934: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20b938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b93c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b940: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20B940u;
    SET_GPR_U32(ctx, 31, 0x20B948u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20B940u, 0x20B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B948u;
label_20b948:
    // 0x20b948: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b94c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20B94Cu;
    SET_GPR_U32(ctx, 31, 0x20B954u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20B94Cu, 0x20B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B954u;
label_20b954:
    // 0x20b954: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b958: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20b95c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b960: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x20b960u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20b964: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b968: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20b968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20b96c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20B96Cu;
    {
        const bool branch_taken_0x20b96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b96c) {
            ctx->pc = 0x20B9ECu;
            return;
        }
    }
    ctx->pc = 0x20B974u;
    // 0x20b974: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b978: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20b97c: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20b980: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20b984: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20b984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20b988: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20b988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20b98c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b990: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b994: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20b994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20b998: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x20b998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x20b99c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b9a0: 0x8fb30188  lw          $s3, 0x188($sp)
    ctx->pc = 0x20b9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9a4: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x20b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x20b9a8: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x20b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x20b9ac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b9b0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20b9b8: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x20b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x20b9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b9c0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20b9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b9c8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b9cc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9d0: 0xa08b0001  sb          $t3, 0x1($a0)
    ctx->pc = 0x20b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x20b9d4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9d8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x20b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b9dc: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x20b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9e0: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x20b9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b9e4: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9e8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x20b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20b9ecu;
}
