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

// Function: Om_movie_info_set
// Address: 0x266950 - 0x266a9c
void Om_movie_info_set_0x266950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_movie_info_set_0x266950");
#endif

    ctx->pc = 0x266950u;

    // 0x266950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x266950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x266954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26695c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266964: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x266964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x266968: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x266968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x26696c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x26696cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266970: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x266970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x266974: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x266978: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x266978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26697c: 0x8e230a68  lw          $v1, 0xA68($s1)
    ctx->pc = 0x26697cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x266980: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x266980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x266984: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266988: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x266988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26698c: 0xae230a68  sw          $v1, 0xA68($s1)
    ctx->pc = 0x26698cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 3));
    // 0x266990: 0x8e240a68  lw          $a0, 0xA68($s1)
    ctx->pc = 0x266990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266994: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266998: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x266998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
    // 0x26699c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x26699cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2669a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2669a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2669a4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2669a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2669a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2669a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2669ac: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2669acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2669b0: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2669b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2669b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2669b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2669b8: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x2669b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x2669bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2669bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2669c0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2669c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2669c4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2669c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2669c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2669c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2669cc: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x2669ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2669d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2669d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2669d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2669d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2669d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2669dc: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x2669dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x2669e0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2669e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2669e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2669e8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2669e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2669ec: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2669ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2669f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2669f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2669f4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2669f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2669f8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2669f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2669fc: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x2669fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x266a00: 0x3273e  dsrl32      $a0, $v1, 28
    ctx->pc = 0x266a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x266a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266a08: 0x832804  sllv        $a1, $v1, $a0
    ctx->pc = 0x266a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x266a0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a10: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x266a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266a14: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266a18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266a1c: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x266a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x266a20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a24: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x266a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266a28: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266a30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x266a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x266a34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a38: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x266a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266a3c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266a40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266a44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x266a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x266a48: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a4c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x266a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266a50: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266a58: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x266a58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x266a5c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x266a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266a60: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x266a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x266a64: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x266a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x266a68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x266a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x266a6c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x266a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x266a70: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x266a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x266a74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266a78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x266a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266a7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x266a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x266a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266a90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x266a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266a94: 0x3e00008  jr          $ra
    ctx->pc = 0x266A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266A9Cu;
}
