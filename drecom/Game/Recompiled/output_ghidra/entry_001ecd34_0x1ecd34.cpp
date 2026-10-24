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

// Function: entry_001ecd34
// Address: 0x1ecd34 - 0x1ece3c
void entry_001ecd34_0x1ecd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecd34_0x1ecd34");
#endif

    switch (ctx->pc) {
        case 0x1ecda4u: goto label_1ecda4;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdf8u: goto label_1ecdf8;
        default: break;
    }

    ctx->pc = 0x1ecd34u;

    // 0x1ecd34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd38: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ecd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ecd40: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd44: 0xac230aa0  sw          $v1, 0xAA0($at)
    ctx->pc = 0x1ecd44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1ecd48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ecd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ecd4c: 0x8c240aa0  lw          $a0, 0xAA0($at)
    ctx->pc = 0x1ecd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ecd50: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1ECD50u;
    {
        const bool branch_taken_0x1ecd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd50) {
            ctx->pc = 0x1ECE3Cu;
            return;
        }
    }
    ctx->pc = 0x1ECD58u;
    // 0x1ecd58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecd5c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecd60: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1ecd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1ecd64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecd68: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecd68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecd6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecd70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecd78: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1ecd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ecd7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ecd80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecd84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd88: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ecd88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecd8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecd94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecd98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecd9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECD9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECDA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECD9Cu, 0x1ECDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDA4u;
label_1ecda4:
    // 0x1ecda4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ecda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecda8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ecda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ecdac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1ecdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1ecdb0: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x1ecdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x1ecdb4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ecdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecdb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ecdbc: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecdc0: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x1ecdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ecdc4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECDC4u;
    SET_GPR_U32(ctx, 31, 0x1ECDCCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECDC4u, 0x1ECDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDCCu;
label_1ecdcc:
    // 0x1ecdcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ecdccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecdd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ecdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ecdd4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ecdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ecdd8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ecddc: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1ecddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecde0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1ecde0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1ecde4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecde8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecdec: 0xa470005c  sh          $s0, 0x5C($v1)
    ctx->pc = 0x1ecdecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ecdf0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECDF0u;
    SET_GPR_U32(ctx, 31, 0x1ECDF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECDF0u, 0x1ECDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDF8u;
label_1ecdf8:
    // 0x1ecdf8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecdf8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecdfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ece00: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ece00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ece04: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1ece08: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1ece08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece0c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ece0cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ece10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ece14: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ece18: 0xa4650076  sh          $a1, 0x76($v1)
    ctx->pc = 0x1ece18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ece1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece20: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece24: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1ece24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1ece28: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1ece28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1ece2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece30: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece34: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1ECE34u;
    {
        const bool branch_taken_0x1ece34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece34) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ECE3Cu;
}
