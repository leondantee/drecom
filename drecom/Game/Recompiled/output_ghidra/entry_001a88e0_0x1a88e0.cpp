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

// Function: entry_001a88e0
// Address: 0x1a88e0 - 0x1a89b0
void entry_001a88e0_0x1a88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88e0_0x1a88e0");
#endif

    switch (ctx->pc) {
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8978u: goto label_1a8978;
        default: break;
    }

    ctx->pc = 0x1a88e0u;

    // 0x1a88e0: 0x96020128  lhu         $v0, 0x128($s0)
    ctx->pc = 0x1a88e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1a88e4: 0x30443fff  andi        $a0, $v0, 0x3FFF
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a88e8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1a88e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a88ec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a88ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a88f0: 0x9603012a  lhu         $v1, 0x12A($s0)
    ctx->pc = 0x1a88f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a88f4: 0x315bc  dsll32      $v0, $v1, 22
    ctx->pc = 0x1a88f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a88f8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a88f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a88fc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1a88fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8900: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1a8900u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1a8904: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x1a8904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1a8908: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1a8908u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1a890c: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x1a890cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1a8910: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1a8910u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1a8914: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a8914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8918: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x1a8918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a891c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1a891cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1a8920: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a8924: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x1a8924u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8928: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1a8928u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1a892c: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x1a892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1a8930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8934: 0xc040330  jal         func_100CC0
    ctx->pc = 0x1A8934u;
    SET_GPR_U32(ctx, 31, 0x1A893Cu);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x1A893Cu;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A893Cu) { return; }
    ctx->pc = 0x1A893Cu;
label_1a893c:
    // 0x1a893c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a893cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8940: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1A8940u;
    SET_GPR_U32(ctx, 31, 0x1A8948u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1A8948u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8948u) { return; }
    ctx->pc = 0x1A8948u;
label_1a8948:
    // 0x1a8948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a894c: 0x26030220  addiu       $v1, $s0, 0x220
    ctx->pc = 0x1a894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1a8950: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a8950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a8954: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1a8958: 0x24c53460  addiu       $a1, $a2, 0x3460
    ctx->pc = 0x1a8958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 13408));
    // 0x1a895c: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x1A895Cu;
    SET_GPR_U32(ctx, 31, 0x1A8964u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x1A8964u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8964u) { return; }
    ctx->pc = 0x1A8964u;
label_1a8964:
    // 0x1a8964: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8964u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8968: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a896c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a896cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8970: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x1A8970u;
    SET_GPR_U32(ctx, 31, 0x1A8978u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x1A8978u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8978u) { return; }
    ctx->pc = 0x1A8978u;
label_1a8978:
    // 0x1a8978: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8978u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a897c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1a897cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8980: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a8980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a8984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a8988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a898c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a898cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a8990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a899c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a899cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a89a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a89a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a89a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89B0u;
}
