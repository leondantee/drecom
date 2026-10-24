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

// Function: entry_001ed044
// Address: 0x1ed044 - 0x1ed14c
void entry_001ed044_0x1ed044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed044_0x1ed044");
#endif

    switch (ctx->pc) {
        case 0x1ed0b4u: goto label_1ed0b4;
        case 0x1ed0dcu: goto label_1ed0dc;
        case 0x1ed108u: goto label_1ed108;
        default: break;
    }

    ctx->pc = 0x1ed044u;

    // 0x1ed044: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed048: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed04c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ed04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ed050: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed054: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ed058: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed05c: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed060: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ED060u;
    {
        const bool branch_taken_0x1ed060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed060) {
            ctx->pc = 0x1ED14Cu;
            return;
        }
    }
    ctx->pc = 0x1ED068u;
    // 0x1ed068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed06c: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed070: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ed070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ed074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed078: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed084: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ed084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed088: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ed08c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed090: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ed090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed094: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed098: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ed098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed09c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ed09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ed0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed0ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED0ACu;
    SET_GPR_U32(ctx, 31, 0x1ED0B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED0ACu, 0x1ED0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0B4u;
label_1ed0b4:
    // 0x1ed0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed0b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed0bc: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x1ed0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1ed0c0: 0x2483008c  addiu       $v1, $a0, 0x8C
    ctx->pc = 0x1ed0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x1ed0c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed0c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed0c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed0cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0d0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ed0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed0d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED0D4u;
    SET_GPR_U32(ctx, 31, 0x1ED0DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED0D4u, 0x1ED0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0DCu;
label_1ed0dc:
    // 0x1ed0dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed0dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed0e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ed0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed0e4: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1ed0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1ed0e8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ed0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ed0ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed0f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed0f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed0fc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1ed0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ed100: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED100u;
    SET_GPR_U32(ctx, 31, 0x1ED108u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED100u, 0x1ED108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED108u;
label_1ed108:
    // 0x1ed108: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ed108u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed10c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ed10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed110: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ed110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ed114: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1ed118: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed11c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ed11cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ed120: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed124: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ed128: 0xa4650076  sh          $a1, 0x76($v1)
    ctx->pc = 0x1ed128u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ed12c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed130: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed134: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1ed134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1ed138: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1ed13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed140: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed144: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1ED144u;
    {
        const bool branch_taken_0x1ed144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed144) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ED14Cu;
}
