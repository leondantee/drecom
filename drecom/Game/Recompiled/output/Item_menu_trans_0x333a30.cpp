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

// Function: Item_menu_trans
// Address: 0x333a30 - 0x334d10
void Item_menu_trans_0x333a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_menu_trans_0x333a30");
#endif

    switch (ctx->pc) {
        case 0x333b7cu: goto label_333b7c;
        case 0x333b88u: goto label_333b88;
        case 0x333b9cu: goto label_333b9c;
        case 0x333ba8u: goto label_333ba8;
        case 0x333be0u: goto label_333be0;
        case 0x333c18u: goto label_333c18;
        case 0x333c64u: goto label_333c64;
        case 0x333cbcu: goto label_333cbc;
        case 0x333cf0u: goto label_333cf0;
        case 0x333dacu: goto label_333dac;
        case 0x333dd8u: goto label_333dd8;
        case 0x334098u: goto label_334098;
        case 0x3340d8u: goto label_3340d8;
        case 0x334148u: goto label_334148;
        case 0x3341c4u: goto label_3341c4;
        case 0x334230u: goto label_334230;
        case 0x334248u: goto label_334248;
        case 0x33427cu: goto label_33427c;
        case 0x33435cu: goto label_33435c;
        case 0x334388u: goto label_334388;
        case 0x33457cu: goto label_33457c;
        case 0x3345ecu: goto label_3345ec;
        case 0x334668u: goto label_334668;
        case 0x3346e4u: goto label_3346e4;
        case 0x33474cu: goto label_33474c;
        case 0x334778u: goto label_334778;
        case 0x3348acu: goto label_3348ac;
        case 0x334924u: goto label_334924;
        case 0x334988u: goto label_334988;
        case 0x3349c0u: goto label_3349c0;
        case 0x334a30u: goto label_334a30;
        case 0x334a5cu: goto label_334a5c;
        case 0x334b94u: goto label_334b94;
        case 0x334c14u: goto label_334c14;
        case 0x334c5cu: goto label_334c5c;
        case 0x334c84u: goto label_334c84;
        case 0x334c9cu: goto label_334c9c;
        case 0x334cd0u: goto label_334cd0;
        default: break;
    }

    ctx->pc = 0x333a30u;

    // 0x333a30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x333a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x333a34: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x333a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x333a38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x333a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x333a3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x333a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x333a40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x333a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x333a44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x333a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x333a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x333a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x333a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x333a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x333a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x333a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x333a5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x333a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x333a60: 0x24466150  addiu       $a2, $v0, 0x6150
    ctx->pc = 0x333a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x333a64: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x333a64u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x333a68: 0x26420a68  addiu       $v0, $s2, 0xA68
    ctx->pc = 0x333a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x333a6c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x333a6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333a70: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x333a74: 0x244329c0  addiu       $v1, $v0, 0x29C0
    ctx->pc = 0x333a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10688));
    // 0x333a78: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x333a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x333a7c: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x333a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x333a80: 0x24c227a0  addiu       $v0, $a2, 0x27A0
    ctx->pc = 0x333a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10144));
    // 0x333a84: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x333a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x333a88: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x333a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x333a8c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x333a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x333a90: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x333a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x333a94: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x333a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x333a98: 0x24c32ac0  addiu       $v1, $a2, 0x2AC0
    ctx->pc = 0x333a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 10944));
    // 0x333a9c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x333a9cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333aa0: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x333aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x333aa4: 0x24c329a0  addiu       $v1, $a2, 0x29A0
    ctx->pc = 0x333aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 10656));
    // 0x333aa8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x333aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x333aac: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x333aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x333ab0: 0x244329b0  addiu       $v1, $v0, 0x29B0
    ctx->pc = 0x333ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x333ab4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x333ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x333ab8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x333ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x333abc: 0x24439950  addiu       $v1, $v0, -0x66B0
    ctx->pc = 0x333abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x333ac0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x333ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x333ac4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x333ac4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3A9950u));
    // 0x333ac8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x333ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x333acc: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x333accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x333ad0: 0x24c32dc0  addiu       $v1, $a2, 0x2DC0
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 11712));
    // 0x333ad4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333ad8: 0xac2332c0  sw          $v1, 0x32C0($at)
    ctx->pc = 0x333ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8932C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C0u, _value); } while (0);
    // 0x333adc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x333ae0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x333ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x333ae4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333ae8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x333ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x333aec: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x333aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x333af0: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x333af0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x333af4: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x333af4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x333af8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x333af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x333afc: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x333afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x333b00: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x333b00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x333b04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x333b08: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x333b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x333b0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x333b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x333b10: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x333b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x333b14: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x333b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x333b18: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x333b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x333b1c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x333b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x333b20: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x333b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x333b24: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x333b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x333b28: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x333b28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x333b2c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x333b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x333b30: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x333b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x333b34: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x333b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x333b38: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x333b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x333b3c: 0x34c91009  ori         $t1, $a2, 0x1009
    ctx->pc = 0x333b3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x333b40: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x333b44: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x333b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x333b48: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x333b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x333b4c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x333b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x333b50: 0x8e465dc8  lw          $a2, 0x5DC8($s2)
    ctx->pc = 0x333b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x333b54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x333b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333b58: 0x14c2001e  bne         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x333B58u;
    {
        const bool branch_taken_0x333b58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x333b58) {
            ctx->pc = 0x333BD4u;
            goto label_333bd4;
        }
    }
    ctx->pc = 0x333B60u;
    // 0x333b60: 0x8e475dcc  lw          $a3, 0x5DCC($s2)
    ctx->pc = 0x333b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x333b64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333b68: 0x14e3001a  bne         $a3, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x333B68u;
    {
        const bool branch_taken_0x333b68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x333b68) {
            ctx->pc = 0x333BD4u;
            goto label_333bd4;
        }
    }
    ctx->pc = 0x333B70u;
    // 0x333b70: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x333b70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333b74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x333B74u;
    {
        const bool branch_taken_0x333b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333b74) {
            ctx->pc = 0x333BC0u;
            goto label_333bc0;
        }
    }
    ctx->pc = 0x333B7Cu;
label_333b7c:
    // 0x333b7c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x333b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x333b80: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x333B80u;
    SET_GPR_U32(ctx, 31, 0x333B88u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x333B80u, 0x333B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B88u;
label_333b88:
    // 0x333b88: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x333b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x333b8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x333b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x333b90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x333b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333b94: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x333B94u;
    SET_GPR_U32(ctx, 31, 0x333B9Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x333B94u, 0x333B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B9Cu;
label_333b9c:
    // 0x333b9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x333b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333ba0: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x333BA0u;
    SET_GPR_U32(ctx, 31, 0x333BA8u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x333BA0u, 0x333BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BA8u;
label_333ba8:
    // 0x333ba8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x333ba8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333bac: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x333bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x333bb0: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x333bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x333bb4: 0xace800a0  sw          $t0, 0xA0($a3)
    ctx->pc = 0x333bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 8));
    // 0x333bb8: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x333bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333bbc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x333bbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_333bc0:
    // 0x333bc0: 0x2a690004  slti        $t1, $s3, 0x4
    ctx->pc = 0x333bc0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x333bc4: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x333BC4u;
    {
        const bool branch_taken_0x333bc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x333bc4) {
            ctx->pc = 0x333B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333b7c;
        }
    }
    ctx->pc = 0x333BCCu;
    // 0x333bcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x333BCCu;
    {
        const bool branch_taken_0x333bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333bcc) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333BD4u;
label_333bd4:
    // 0x333bd4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x333bd4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333bd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333BD8u;
    {
        const bool branch_taken_0x333bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333bd8) {
            ctx->pc = 0x333C30u;
            goto label_333c30;
        }
    }
    ctx->pc = 0x333BE0u;
label_333be0:
    // 0x333be0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x333be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x333be4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x333be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333be8: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x333be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x333becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333bf0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x333bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x333bf4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x333bf4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333bf8: 0x0  nop
    ctx->pc = 0x333bf8u;
    // NOP
    // 0x333bfc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x333bfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333c00: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x333c00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x333c04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x333c04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333c08: 0x0  nop
    ctx->pc = 0x333c08u;
    // NOP
    // 0x333c0c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x333c0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333c10: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333C10u;
    SET_GPR_U32(ctx, 31, 0x333C18u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333C10u, 0x333C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C18u;
label_333c18:
    // 0x333c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x333c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333c1c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x333c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x333c20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x333c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x333c24: 0xac4700a0  sw          $a3, 0xA0($v0)
    ctx->pc = 0x333c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 7));
    // 0x333c28: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x333c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333c2c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x333c2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_333c30:
    // 0x333c30: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x333c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x333c34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x333C34u;
    {
        const bool branch_taken_0x333c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333c34) {
            ctx->pc = 0x333BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333be0;
        }
    }
    ctx->pc = 0x333C3Cu;
    // 0x333c3c: 0x0  nop
    ctx->pc = 0x333c3cu;
    // NOP
label_333c40:
    // 0x333c40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x333c44: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x333c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333c48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x333c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x333c50: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x333c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x333c54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x333c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x333c58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x333c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x333c5c: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x333C5Cu;
    {
        const bool branch_taken_0x333c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c5c) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x333C64u;
label_333c64:
    // 0x333c64: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x333c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x333c68: 0x24c39960  addiu       $v1, $a2, -0x66A0
    ctx->pc = 0x333c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941024));
    // 0x333c6c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x333c6cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333c70: 0x9242683e  lbu         $v0, 0x683E($s2)
    ctx->pc = 0x333c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26686)));
    // 0x333c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333c78: 0x9247683f  lbu         $a3, 0x683F($s2)
    ctx->pc = 0x333c78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x333c7c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x333c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x333c80: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x333c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x333c84: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x333c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x333c88: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x333c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333c8c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x333c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x333c90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333c94: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x333c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x333c98: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x333c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x333c9c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x333c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x333ca0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x333CA0u;
    {
        const bool branch_taken_0x333ca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333ca0) {
            ctx->pc = 0x333CB0u;
            goto label_333cb0;
        }
    }
    ctx->pc = 0x333CA8u;
    // 0x333ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333cac: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x333cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_333cb0:
    // 0x333cb0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x333cb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333cb4: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x333CB4u;
    {
        const bool branch_taken_0x333cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333cb4) {
            ctx->pc = 0x334208u;
            goto label_334208;
        }
    }
    ctx->pc = 0x333CBCu;
label_333cbc:
    // 0x333cbc: 0x9242683f  lbu         $v0, 0x683F($s2)
    ctx->pc = 0x333cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x333cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333cc4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x333cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x333cc8: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x333cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x333ccc: 0x8e426850  lw          $v0, 0x6850($s2)
    ctx->pc = 0x333cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333cd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333cd4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x333cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x333cd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x333cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333cdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x333cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x333ce0: 0x2455663e  addiu       $s5, $v0, 0x663E
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x333ce4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x333ce4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x333ce8: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x333CE8u;
    SET_GPR_U32(ctx, 31, 0x333CF0u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x333CE8u, 0x333CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CF0u;
label_333cf0:
    // 0x333cf0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x333cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x333cf4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x333cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x333cf8: 0x2f040  sll         $fp, $v0, 1
    ctx->pc = 0x333cf8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x333cfc: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x333cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x333d00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x333d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333d0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x333d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x333d10: 0x244297e0  addiu       $v0, $v0, -0x6820
    ctx->pc = 0x333d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x333d14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x333d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d18: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x333d18u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333d1c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x333d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x333d20: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x333d20u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d24: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x333d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x333d28: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x333d28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x333d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x333d30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x333d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333d34: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x333d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333d38: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x333d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x333d3c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x333d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x333d40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333d44: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x333d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333d48: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x333d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x333d4c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x333d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x333d50: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x333d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x333d54: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x333d54u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x333d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x333d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d60: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x333d60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x333d64: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x333d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x333d68: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x333d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x333d6c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x333d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x333d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x333d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d74: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x333d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x333d78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x333d78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333d7c: 0x2c61823  subu        $v1, $s6, $a2
    ctx->pc = 0x333d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x333d80: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x333d80u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x333d84: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x333d84u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333d88: 0x0  nop
    ctx->pc = 0x333d88u;
    // NOP
    // 0x333d8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333d90: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x333d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x333d94: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x333d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x333d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333d9c: 0x0  nop
    ctx->pc = 0x333d9cu;
    // NOP
    // 0x333da0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x333da0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333da4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333DA4u;
    SET_GPR_U32(ctx, 31, 0x333DACu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333DA4u, 0x333DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DACu;
label_333dac:
    // 0x333dac: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x333dacu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333db0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x333db0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333db4: 0x0  nop
    ctx->pc = 0x333db4u;
    // NOP
    // 0x333db8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333dbc: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x333dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x333dc0: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x333dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x333dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333dc8: 0x0  nop
    ctx->pc = 0x333dc8u;
    // NOP
    // 0x333dcc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x333dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333dd0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333DD0u;
    SET_GPR_U32(ctx, 31, 0x333DD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333DD0u, 0x333DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DD8u;
label_333dd8:
    // 0x333dd8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x333dd8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333ddc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x333de0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x333de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x333de4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x333de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x333de8: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x333de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x333dec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x333decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x333df0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x333df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x333df4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x333df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x333df8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x333df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x333dfc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x333dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x333e00: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x333e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333e04: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x333e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x333e08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x333e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333e0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x333e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x333e10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333e14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x333e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x333e18: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x333e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x333e1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x333e20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x333e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x333e24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x333e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x333e28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x333e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x333e2c: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x333e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x333e30: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x333e34: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x333e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x333e38: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x333e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x333e3c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333e40: 0x82465deb  lb          $a2, 0x5DEB($s2)
    ctx->pc = 0x333e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24043)));
    // 0x333e44: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x333e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x333e48: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x333e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333e4c: 0x8e426850  lw          $v0, 0x6850($s2)
    ctx->pc = 0x333e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x333e50: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x333e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x333e54: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x333E54u;
    {
        const bool branch_taken_0x333e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x333e54) {
            ctx->pc = 0x333E94u;
            goto label_333e94;
        }
    }
    ctx->pc = 0x333E5Cu;
    // 0x333e5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x333e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333e60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333e64: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333e68: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x333e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x333e6c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x333e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333e70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x333e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x333e74: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e78: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333e7c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333e80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x333e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333e84: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x333e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333e88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x333e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x333e8c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x333E8Cu;
    {
        const bool branch_taken_0x333e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e8c) {
            ctx->pc = 0x333F28u;
            goto label_333f28;
        }
    }
    ctx->pc = 0x333E94u;
label_333e94:
    // 0x333e94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x333e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333e98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333e9c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x333e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x333ea0: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x333ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x333ea4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x333ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ea8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x333ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x333eac: 0x0  nop
    ctx->pc = 0x333eacu;
    // NOP
    // 0x333eb0: 0x1010  mfhi        $v0
    ctx->pc = 0x333eb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x333eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333eb8: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x333eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333ebc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333ec0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x333ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x333ec4: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x333ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x333ec8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x333ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ecc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x333eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x333ed0: 0x0  nop
    ctx->pc = 0x333ed0u;
    // NOP
    // 0x333ed4: 0x1810  mfhi        $v1
    ctx->pc = 0x333ed4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333ed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333edc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x333edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x333ee0: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x333ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x333ee4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x333ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333ee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333eec: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333ef0: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x333ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333ef4: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x333ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333ef8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x333efc: 0x0  nop
    ctx->pc = 0x333efcu;
    // NOP
    // 0x333f00: 0x1010  mfhi        $v0
    ctx->pc = 0x333f00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x333f04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x333f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x333f08: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x333f08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333f0c: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x333f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x333f10: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333f14: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x333f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333f18: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x333f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x333f1c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x333f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333f20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x333f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x333f24: 0x0  nop
    ctx->pc = 0x333f24u;
    // NOP
label_333f28:
    // 0x333f28: 0x8e445dc0  lw          $a0, 0x5DC0($s2)
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x333f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333f30: 0x14820025  bne         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x333F30u;
    {
        const bool branch_taken_0x333f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x333f30) {
            ctx->pc = 0x333FC8u;
            goto label_333fc8;
        }
    }
    ctx->pc = 0x333F38u;
    // 0x333f38: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x333f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x333f3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x333f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f40: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x333f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x333f44: 0x34a45556  ori         $a0, $a1, 0x5556
    ctx->pc = 0x333f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x333f48: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x333f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f4c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333f50: 0x0  nop
    ctx->pc = 0x333f50u;
    // NOP
    // 0x333f54: 0x1810  mfhi        $v1
    ctx->pc = 0x333f54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333f58: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x333f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333f5c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x333f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x333f60: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x333f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f64: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333f68: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x333f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333f6c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x333f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f70: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333f74: 0x0  nop
    ctx->pc = 0x333f74u;
    // NOP
    // 0x333f78: 0x3810  mfhi        $a3
    ctx->pc = 0x333f78u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x333f7c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x333f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x333f80: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x333f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x333f84: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x333f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x333f88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x333f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x333f8c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x333f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333f90: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x333f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x333f94: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x333f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x333f98: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x333f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f9c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x333f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333fa0: 0x0  nop
    ctx->pc = 0x333fa0u;
    // NOP
    // 0x333fa4: 0x1810  mfhi        $v1
    ctx->pc = 0x333fa4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333fa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333fac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333fb0: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x333fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333fb4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x333fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x333fb8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x333fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x333fbc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x333fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x333fc0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x333fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x333fc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_333fc8:
    // 0x333fc8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x333fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x333fcc: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x333fd0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x333fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333fd4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x333fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x333fd8: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x333fdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x333fe0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x333fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x333fe4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x333fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x333fe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x333fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x333fec: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x333fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x333ff0: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x333ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x333ff4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x333ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x333ff8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x333ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x333ffc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334000: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334004: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334008: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33400c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334010: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334014: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x334014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x334018: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x33401c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33401cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x334020: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x334020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334024: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x334024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334028: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x334028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33402c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334030: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x334030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x334034: 0x244300a4  addiu       $v1, $v0, 0xA4
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x334038: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33403c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x33403cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x334040: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x334040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334044: 0x286100a6  slti        $at, $v1, 0xA6
    ctx->pc = 0x334044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)166) ? 1 : 0);
    // 0x334048: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x334048u;
    {
        const bool branch_taken_0x334048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x334048) {
            ctx->pc = 0x334060u;
            goto label_334060;
        }
    }
    ctx->pc = 0x334050u;
    // 0x334050: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334054: 0x24e3fffe  addiu       $v1, $a3, -0x2
    ctx->pc = 0x334054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x334058: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x334058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x33405c: 0x0  nop
    ctx->pc = 0x33405cu;
    // NOP
label_334060:
    // 0x334060: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x334060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x334064: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x334064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334068: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33406c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x33406cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x334070: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334074: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x334074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x334078: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33407c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334080: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x334080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334088: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x334088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x33408c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x33408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334090: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334090u;
    SET_GPR_U32(ctx, 31, 0x334098u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334098u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334098u) { return; }
    ctx->pc = 0x334098u;
label_334098:
    // 0x334098: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33409c: 0x8c232720  lw          $v1, 0x2720($at)
    ctx->pc = 0x33409cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892720u));
    // 0x3340a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3340a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3340a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3340a8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3340a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3340ac: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3340acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3340b0: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3340b4: 0x24662730  addiu       $a2, $v1, 0x2730
    ctx->pc = 0x3340b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x3340b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3340b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3340bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3340bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3340c0: 0x8c2932c0  lw          $t1, 0x32C0($at)
    ctx->pc = 0x3340c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3340c4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x3340c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x3340c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3340c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3340cc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3340ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3340d0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x3340D0u;
    SET_GPR_U32(ctx, 31, 0x3340D8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x3340D8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3340D8u) { return; }
    ctx->pc = 0x3340D8u;
label_3340d8:
    // 0x3340d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3340d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3340dc: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x3340dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3340e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3340e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3340e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3340e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3340e8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x3340e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3340ec: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3340ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3340f0: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3340f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3340f4: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x3340f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
    // 0x3340f8: 0x21cbe  dsrl32      $v1, $v0, 18
    ctx->pc = 0x3340f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x3340fc: 0x67202d  daddu       $a0, $v1, $a3
    ctx->pc = 0x3340fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x334100: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x334100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x334104: 0x30883fff  andi        $t0, $a0, 0x3FFF
    ctx->pc = 0x334104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x334108: 0x8197c  dsll32      $v1, $t0, 5
    ctx->pc = 0x334108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 5));
    // 0x33410c: 0x3c08fff8  lui         $t0, 0xFFF8
    ctx->pc = 0x33410cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65528 << 16));
    // 0x334110: 0x3507001f  ori         $a3, $t0, 0x1F
    ctx->pc = 0x334110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)31);
    // 0x334114: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x334114u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x334118: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x334118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33411c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33411cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x334120: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x334120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x334124: 0x1093825  or          $a3, $t0, $t1
    ctx->pc = 0x334124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x334128: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x334128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x33412c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x334130: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x334130u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x334134: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x334134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334138: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x334138u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33413c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33413cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x334140: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334140u;
    SET_GPR_U32(ctx, 31, 0x334148u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334140u, 0x334148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334148u;
label_334148:
    // 0x334148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33414c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33414cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x334150: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x334150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x334154: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x334154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x334158: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x334158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x33415c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334164: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334168: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x334168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x33416c: 0x34c3000a  ori         $v1, $a2, 0xA
    ctx->pc = 0x33416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x334170: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334174: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334178: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x33417c: 0x23bb8  dsll        $a3, $v0, 14
    ctx->pc = 0x33417cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 14);
    // 0x334180: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x334180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334184: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x334184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x334188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33418c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33418cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x334190: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x334190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x334194: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334198: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x334198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33419c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3341a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3341a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3341a4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3341a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x3341a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3341a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3341ac: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x3341acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x3341b0: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x3341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3341b4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3341b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3341b8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3341b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x3341bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3341BCu;
    SET_GPR_U32(ctx, 31, 0x3341C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3341BCu, 0x3341C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341C4u;
label_3341c4:
    // 0x3341c4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x3341c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3341c8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x3341c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3341cc: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x3341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3341d0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x3341d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3341d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3341d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3341d8: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x3341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x3341dc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3341dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3341e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3341e4: 0xac2232c0  sw          $v0, 0x32C0($at)
    ctx->pc = 0x3341e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C0u, _value); } while (0);
    // 0x3341e8: 0x26f50008  addiu       $s5, $s7, 0x8
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x3341ec: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x3341ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3341f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3341f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3341f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3341f8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3341f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3341fc: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334200: 0x73c09e28  paddub      $s3, $fp, $zero
    ctx->pc = 0x334200u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x334204: 0x0  nop
    ctx->pc = 0x334204u;
    // NOP
label_334208:
    // 0x334208: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x334208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33420c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x33420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x334210: 0x1440feaa  bnez        $v0, . + 4 + (-0x156 << 2)
    ctx->pc = 0x334210u;
    {
        const bool branch_taken_0x334210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334210) {
            ctx->pc = 0x333CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333cbc;
        }
    }
    ctx->pc = 0x334218u;
    // 0x334218: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33421c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33421cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334220: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x334220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x334224: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334228: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334228u;
    SET_GPR_U32(ctx, 31, 0x334230u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334228u, 0x334230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334230u;
label_334230:
    // 0x334230: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334234: 0x24439990  addiu       $v1, $v0, -0x6670
    ctx->pc = 0x334234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
    // 0x334238: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x334238u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33423c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33423cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334240: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x334240u;
    {
        const bool branch_taken_0x334240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334240) {
            ctx->pc = 0x3346A8u;
            goto label_3346a8;
        }
    }
    ctx->pc = 0x334248u;
label_334248:
    // 0x334248: 0x9242683f  lbu         $v0, 0x683F($s2)
    ctx->pc = 0x334248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26687)));
    // 0x33424c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334250: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x334250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x334254: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x334254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x334258: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x334258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x33425c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334260: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x334260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x334264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334268: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x334268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33426c: 0x24c2663e  addiu       $v0, $a2, 0x663E
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 26174));
    // 0x334270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334274: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x334274u;
    SET_GPR_U32(ctx, 31, 0x33427Cu);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x334274u, 0x33427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33427Cu;
label_33427c:
    // 0x33427c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x33427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x334280: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x334284: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x334284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334288: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x334288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33428c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x33428cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x334290: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x334290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334294: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x334294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x334298: 0x244397e0  addiu       $v1, $v0, -0x6820
    ctx->pc = 0x334298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x33429c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x33429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3342a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3342a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342a4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x3342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3342a8: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x3342a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3342ac: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3342acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3342b0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3342b0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342b4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3342b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3342b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3342b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3342bc: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x3342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3342c0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3342c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3342c4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x3342c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3342c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3342cc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3342d0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3342d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3342d4: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x3342d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3342d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3342d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3342dc: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x3342dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x3342e0: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x3342e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3342e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3342e8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3342e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342ec: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3342ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3342f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3342f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3342f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3342f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3342f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3342fc: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x3342fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334300: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x334300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x334304: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334308: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x334308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33430c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334310: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x334314: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x334314u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x334318: 0x2a23823  subu        $a3, $s5, $v0
    ctx->pc = 0x334318u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x33431c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x33431cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334320: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x334320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x334324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334328: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x33432c: 0x2c61023  subu        $v0, $s6, $a2
    ctx->pc = 0x33432cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x334330: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x334330u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334334: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334334u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334338: 0x0  nop
    ctx->pc = 0x334338u;
    // NOP
    // 0x33433c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33433cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334340: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x334340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x334344: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x334344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x334348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33434c: 0x0  nop
    ctx->pc = 0x33434cu;
    // NOP
    // 0x334350: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334350u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334354: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334354u;
    SET_GPR_U32(ctx, 31, 0x33435Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334354u, 0x33435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33435Cu;
label_33435c:
    // 0x33435c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33435cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334360: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334360u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334364: 0x0  nop
    ctx->pc = 0x334364u;
    // NOP
    // 0x334368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33436c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x33436cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x334370: 0x34c3cccd  ori         $v1, $a2, 0xCCCD
    ctx->pc = 0x334370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x334374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x334374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334378: 0x0  nop
    ctx->pc = 0x334378u;
    // NOP
    // 0x33437c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x33437cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334380: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334380u;
    SET_GPR_U32(ctx, 31, 0x334388u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334380u, 0x334388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334388u;
label_334388:
    // 0x334388: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x334388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33438c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x33438cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x334390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x334394: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x334394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x334398: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x334398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x33439c: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x33439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x3343a0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3343a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3343a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3343a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3343a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3343a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3343ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3343acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3343b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3343b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3343b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3343b8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x3343b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3343bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3343c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3343c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3343c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3343c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3343c8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3343c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3343cc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3343ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3343d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3343d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3343d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3343d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3343d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3343dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3343e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3343e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3343e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3343e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3343e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3343ec: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3343ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3343f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3343f4: 0x82435deb  lb          $v1, 0x5DEB($s2)
    ctx->pc = 0x3343f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24043)));
    // 0x3343f8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x3343f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3343fc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3343fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x334400: 0x8e436850  lw          $v1, 0x6850($s2)
    ctx->pc = 0x334400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26704)));
    // 0x334404: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x334404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x334408: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x334408u;
    {
        const bool branch_taken_0x334408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x334408) {
            ctx->pc = 0x334448u;
            goto label_334448;
        }
    }
    ctx->pc = 0x334410u;
    // 0x334410: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x334410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x334414: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x334414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334418: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x334418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33441c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33441cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x334420: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x334420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x334424: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x334424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x334428: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x334428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x33442c: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x33442cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334430: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x334434: 0x471825  or          $v1, $v0, $a3
    ctx->pc = 0x334434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x334438: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x334438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33443c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33443cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334440: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x334440u;
    {
        const bool branch_taken_0x334440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334440) {
            ctx->pc = 0x3344D8u;
            goto label_3344d8;
        }
    }
    ctx->pc = 0x334448u;
label_334448:
    // 0x334448: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x334448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33444c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334450: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x334454: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x334454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x334458: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x334458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33445c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x33445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x334460: 0x0  nop
    ctx->pc = 0x334460u;
    // NOP
    // 0x334464: 0x2010  mfhi        $a0
    ctx->pc = 0x334464u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x334468: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x334468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33446c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x33446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x334470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334474: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x334474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x334478: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x334478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x33447c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x33447cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x334480: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x334480u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x334484: 0x0  nop
    ctx->pc = 0x334484u;
    // NOP
    // 0x334488: 0x1010  mfhi        $v0
    ctx->pc = 0x334488u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33448c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x334490: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x334490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x334494: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x334494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x334498: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x334498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33449c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3344a0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x3344a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x3344a4: 0x34665556  ori         $a2, $v1, 0x5556
    ctx->pc = 0x3344a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x3344a8: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x3344a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3344ac: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x3344acu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3344b0: 0x0  nop
    ctx->pc = 0x3344b0u;
    // NOP
    // 0x3344b4: 0x1010  mfhi        $v0
    ctx->pc = 0x3344b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3344b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3344bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3344c0: 0x471825  or          $v1, $v0, $a3
    ctx->pc = 0x3344c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3344c4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3344c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3344cc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3344ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3344d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3344d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3344d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3344d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3344d8:
    // 0x3344d8: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x3344dc: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x3344dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3344e0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3344e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3344e4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x3344e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3344e8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x3344e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x3344ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x3344ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3344f0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3344f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3344f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3344f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3344f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3344f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3344fc: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x3344fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334500: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x334500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x334504: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x334504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x334508: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x33450c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x33450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334510: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334514: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334518: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33451c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334524: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x334524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x334528: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x334528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x33452c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x334530: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x334530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334534: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x334534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334538: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x334538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33453c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334540: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x334544: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x334544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x334548: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33454c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334550: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x334550u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334554: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x334558: 0x24662730  addiu       $a2, $v1, 0x2730
    ctx->pc = 0x334558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x33455c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x33455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x334560: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334564: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x334564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334568: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33456c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x33456cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334570: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334574: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334574u;
    SET_GPR_U32(ctx, 31, 0x33457Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33457Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33457Cu) { return; }
    ctx->pc = 0x33457Cu;
label_33457c:
    // 0x33457c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33457cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334580: 0x8c2332c0  lw          $v1, 0x32C0($at)
    ctx->pc = 0x334580u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334584: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x334584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x334588: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33458c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x33458cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x334590: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334594: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x334594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x334598: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x33459c: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x33459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x3345a0: 0x66102d  daddu       $v0, $v1, $a2
    ctx->pc = 0x3345a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3345a4: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x3345a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x3345a8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x3345ac: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x3345acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x3345b0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x3345b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x3345b4: 0x3446001f  ori         $a2, $v0, 0x1F
    ctx->pc = 0x3345b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x3345b8: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x3345b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3345bc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x3345bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3345c0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x3345c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x3345c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3345c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3345c8: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x3345c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x3345cc: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x3345ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3345d0: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3345d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3345d4: 0xfd070018  sd          $a3, 0x18($t0)
    ctx->pc = 0x3345d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 7));
    // 0x3345d8: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x3345d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3345dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3345dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3345e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3345e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3345e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3345E4u;
    SET_GPR_U32(ctx, 31, 0x3345ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3345E4u, 0x3345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345ECu;
label_3345ec:
    // 0x3345ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3345ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3345f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3345f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3345f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3345f8: 0x34441009  ori         $a0, $v0, 0x1009
    ctx->pc = 0x3345f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x3345fc: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x3345fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x334600: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x334600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334604: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x334604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x334608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x334608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x33460c: 0x33938  dsll        $a3, $v1, 4
    ctx->pc = 0x33460cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 4);
    // 0x334610: 0x34e8000a  ori         $t0, $a3, 0xA
    ctx->pc = 0x334610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x334614: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x334614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334618: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x334618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x33461c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x33461cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x334620: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x334620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x334624: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x334624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x334628: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x334628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33462c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x33462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x334630: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334630u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334634: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x334634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x334638: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x334638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x33463c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334640: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334644: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334648: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x334648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
    // 0x33464c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x33464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334650: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x334650u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x334654: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334658: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33465c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x33465cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x334660: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334660u;
    SET_GPR_U32(ctx, 31, 0x334668u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334660u, 0x334668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334668u;
label_334668:
    // 0x334668: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x334668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x33466c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x33466cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x334670: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x334670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334674: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x334674u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334678: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33467c: 0x8c2232c0  lw          $v0, 0x32C0($at)
    ctx->pc = 0x33467cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932C0u));
    // 0x334680: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x334684: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334688: 0xac2232c0  sw          $v0, 0x32C0($at)
    ctx->pc = 0x334688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C0u, _value); } while (0);
    // 0x33468c: 0x26e70008  addiu       $a3, $s7, 0x8
    ctx->pc = 0x33468cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334690: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x334690u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334694: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x334694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x334698: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x334698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33469c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x33469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3346a0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3346a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3346a4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x3346a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_3346a8:
    // 0x3346a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3346ac: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x3346acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3346b0: 0x1460fee5  bnez        $v1, . + 4 + (-0x11B << 2)
    ctx->pc = 0x3346B0u;
    {
        const bool branch_taken_0x3346b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3346b0) {
            ctx->pc = 0x334248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334248;
        }
    }
    ctx->pc = 0x3346B8u;
    // 0x3346b8: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x3346B8u;
    {
        const bool branch_taken_0x3346b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346b8) {
            ctx->pc = 0x33499Cu;
            goto label_33499c;
        }
    }
    ctx->pc = 0x3346C0u;
label_3346c0:
    // 0x3346c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3346c4: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x3346c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x3346c8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3346c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3346cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3346d0: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x3346d4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3346d4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3346d8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3346d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3346dc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3346DCu;
    {
        const bool branch_taken_0x3346dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346dc) {
            ctx->pc = 0x334948u;
            goto label_334948;
        }
    }
    ctx->pc = 0x3346E4u;
label_3346e4:
    // 0x3346e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3346e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3346e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3346e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3346ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3346ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3346f0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3346f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3346f4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3346f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3346f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3346fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334700: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x334700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x334704: 0x8ef50000  lw          $s5, 0x0($s7)
    ctx->pc = 0x334704u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x334708: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x334708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x33470c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x33470cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334710: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x334710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x334714: 0x2a2f021  addu        $fp, $s5, $v0
    ctx->pc = 0x334714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x334718: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x334718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33471c: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x33471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x334720: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334724: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334724u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334728: 0x0  nop
    ctx->pc = 0x334728u;
    // NOP
    // 0x33472c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33472cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334730: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334734: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33473c: 0x0  nop
    ctx->pc = 0x33473cu;
    // NOP
    // 0x334740: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334740u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334744: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334744u;
    SET_GPR_U32(ctx, 31, 0x33474Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334744u, 0x33474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33474Cu;
label_33474c:
    // 0x33474c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x33474cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334750: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334750u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334754: 0x0  nop
    ctx->pc = 0x334754u;
    // NOP
    // 0x334758: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33475c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334760: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334768: 0x0  nop
    ctx->pc = 0x334768u;
    // NOP
    // 0x33476c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x33476cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334770: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334770u;
    SET_GPR_U32(ctx, 31, 0x334778u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334770u, 0x334778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334778u;
label_334778:
    // 0x334778: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x334778u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33477c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x334784: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x334784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x334788: 0x34622b16  ori         $v0, $v1, 0x2B16
    ctx->pc = 0x334788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x33478c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x334790: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x334790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x334794: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x334794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x334798: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x334798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33479c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3347a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3347a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3347a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3347a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3347ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3347b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3347b4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x3347b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3347b8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3347bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3347bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3347c0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3347c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3347c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3347c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3347c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3347cc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3347ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3347d0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3347d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3347d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3347d8: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3347d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3347dc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3347dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3347e0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x3347e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3347e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x3347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3347e8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3347ec: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x3347ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3347f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3347f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3347f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3347f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3347f8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3347f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3347fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334800: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x334800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x334804: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x334804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x334808: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33480c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33480cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334810: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x334810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x334814: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x334814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x334818: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33481c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x33481cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x334820: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x334820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x334824: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x334824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334828: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x334828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x33482c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x33482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x334830: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334834: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x334834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334838: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x33483c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33483cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x334840: 0x1e3100  sll         $a2, $fp, 4
    ctx->pc = 0x334840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x334844: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x334844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x334848: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x334848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33484c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x33484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334850: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334854: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x334854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334858: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x334858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x33485c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x33485cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x334860: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x334860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x334864: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x334864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x334868: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x334868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x33486c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x33486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334874: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x334874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334878: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x334878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33487c: 0x246600a3  addiu       $a2, $v1, 0xA3
    ctx->pc = 0x33487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x334880: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x334880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334884: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x334884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x334888: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x334888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33488c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334890: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x334890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x334894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334898: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x334898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x33489c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x33489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3348a0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3348a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3348a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3348A4u;
    SET_GPR_U32(ctx, 31, 0x3348ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3348A4u, 0x3348ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348ACu;
label_3348ac:
    // 0x3348ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3348acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3348b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3348b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3348b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3348b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3348b8: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x3348b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x3348bc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3348bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3348c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3348c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3348c4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3348c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3348c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3348cc: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x3348ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x3348d0: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x3348d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3348d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3348d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3348d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3348d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3348dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3348e0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x3348e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x3348e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3348e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3348e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3348ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3348ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3348f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3348f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3348f4: 0x32e38  dsll        $a1, $v1, 24
    ctx->pc = 0x3348f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 24);
    // 0x3348f8: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x3348f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3348fc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334900: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x334900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x334904: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334908: 0x228bc  dsll32      $a1, $v0, 2
    ctx->pc = 0x334908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 2));
    // 0x33490c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x33490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x334910: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x334910u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x334914: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x334914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334918: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x334918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x33491c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33491Cu;
    SET_GPR_U32(ctx, 31, 0x334924u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33491Cu, 0x334924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334924u;
label_334924:
    // 0x334924: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x334924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x334928: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334928u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33492c: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x33492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334930: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x334930u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334934: 0x26e60008  addiu       $a2, $s7, 0x8
    ctx->pc = 0x334934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334938: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x334938u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x33493c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x33493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334940: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x334940u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334944: 0x0  nop
    ctx->pc = 0x334944u;
    // NOP
label_334948:
    // 0x334948: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x334948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33494c: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
    ctx->pc = 0x33494Cu;
    {
        const bool branch_taken_0x33494c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33494c) {
            ctx->pc = 0x3346E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3346e4;
        }
    }
    ctx->pc = 0x334954u;
    // 0x334954: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334958: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x334958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33495c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x33495cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x334960: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334964: 0x34441048  ori         $a0, $v0, 0x1048
    ctx->pc = 0x334964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x334968: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33496c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x33496cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x334970: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x334970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334974: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x334974u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x334978: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x334978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33497c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x33497cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334980: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334980u;
    SET_GPR_U32(ctx, 31, 0x334988u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334980u, 0x334988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334988u;
label_334988:
    // 0x334988: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33498c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x33498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334990: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x334990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x334994: 0x1000fcb3  b           . + 4 + (-0x34D << 2)
    ctx->pc = 0x334994u;
    {
        const bool branch_taken_0x334994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334994) {
            ctx->pc = 0x333C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333c64;
        }
    }
    ctx->pc = 0x33499Cu;
label_33499c:
    // 0x33499c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x33499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3349a0: 0x2466674c  addiu       $a2, $v1, 0x674C
    ctx->pc = 0x3349a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 26444));
    // 0x3349a4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x3349a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3349a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3349ac: 0x244299f8  addiu       $v0, $v0, -0x6608
    ctx->pc = 0x3349acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941176));
    // 0x3349b0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3349b0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3349b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3349b8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3349B8u;
    {
        const bool branch_taken_0x3349b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349b8) {
            ctx->pc = 0x334C38u;
            goto label_334c38;
        }
    }
    ctx->pc = 0x3349C0u;
label_3349c0:
    // 0x3349c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3349c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3349c4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3349c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3349c8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3349cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3349ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3349d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3349d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3349d4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3349d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3349d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3349d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3349dc: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x3349dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x3349e0: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3349e4: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x3349e4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3349e8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3349ec: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3349ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349f0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3349f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3349f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3349f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3349f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3349f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349fc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x334a00: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x334a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x334a04: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334a08: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334a08u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a0c: 0x0  nop
    ctx->pc = 0x334a0cu;
    // NOP
    // 0x334a10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334a14: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334a18: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a20: 0x0  nop
    ctx->pc = 0x334a20u;
    // NOP
    // 0x334a24: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334a24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334a28: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334A28u;
    SET_GPR_U32(ctx, 31, 0x334A30u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334A28u, 0x334A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A30u;
label_334a30:
    // 0x334a30: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x334a30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334a34: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334a34u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a38: 0x0  nop
    ctx->pc = 0x334a38u;
    // NOP
    // 0x334a3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334a40: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334a44: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a4c: 0x0  nop
    ctx->pc = 0x334a4cu;
    // NOP
    // 0x334a50: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334a50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334a54: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334A54u;
    SET_GPR_U32(ctx, 31, 0x334A5Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334A54u, 0x334A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A5Cu;
label_334a5c:
    // 0x334a5c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x334a5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334a60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x334a64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x334a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x334a68: 0x3c046400  lui         $a0, 0x6400
    ctx->pc = 0x334a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25600 << 16));
    // 0x334a6c: 0x34832b16  ori         $v1, $a0, 0x2B16
    ctx->pc = 0x334a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11030);
    // 0x334a70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x334a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x334a74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x334a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x334a78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x334a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x334a7c: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x334a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x334a80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x334a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x334a84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x334a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334a88: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x334a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334a8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x334a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334a94: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x334a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334a98: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x334a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334a9c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x334a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x334aa0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x334aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x334aa4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x334aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334aac: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x334aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334ab0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x334ab4: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x334ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334ab8: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334abc: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x334abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x334ac0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334ac4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x334ac8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x334ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334acc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x334accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x334ad0: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x334ad4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x334ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x334ad8: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x334ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334adc: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334ae0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x334ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334ae4: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x334ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x334ae8: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334aec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x334aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x334af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334af4: 0x154100  sll         $t0, $s5, 4
    ctx->pc = 0x334af4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x334af8: 0x25027000  addiu       $v0, $t0, 0x7000
    ctx->pc = 0x334af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x334afc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334b00: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x334b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x334b04: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x334b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334b08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x334b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334b0c: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334b10: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x334b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x334b14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x334b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x334b18: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x334b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334b1c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x334b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x334b20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334b24: 0x1e3100  sll         $a2, $fp, 4
    ctx->pc = 0x334b24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x334b28: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x334b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x334b2c: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x334b2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334b30: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334b34: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x334b38: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x334b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334b3c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334b40: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x334b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x334b44: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x334b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x334b48: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x334b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x334b4c: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x334b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334b50: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x334b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334b54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334b58: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x334b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334b5c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x334b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x334b60: 0x248200a3  addiu       $v0, $a0, 0xA3
    ctx->pc = 0x334b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 163));
    // 0x334b64: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x334b64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334b68: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x334b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x334b6c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x334b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334b70: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x334b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x334b74: 0x2509cca0  addiu       $t1, $t0, -0x3360
    ctx->pc = 0x334b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954144));
    // 0x334b78: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x334b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x334b7c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x334b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x334b80: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x334b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334b84: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x334b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334b88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x334b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x334b8c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334B8Cu;
    SET_GPR_U32(ctx, 31, 0x334B94u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334B8Cu, 0x334B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B94u;
label_334b94:
    // 0x334b94: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x334b94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334b98: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x334b98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x334b9c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x334b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x334ba0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334ba4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x334ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x334ba8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x334ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x334bac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x334bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334bb0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bb8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x334bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x334bbc: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x334bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x334bc0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x334bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334bc4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bcc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x334bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x334bd0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x334bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x334bd4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x334bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334bd8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334be0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x334be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x334be4: 0x463825  or          $a3, $v0, $a2
    ctx->pc = 0x334be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334be8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x334be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334bec: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x334becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x334bf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bf4: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x334bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x334bf8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x334bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334bfc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x334bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x334c00: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x334c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x334c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c08: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x334c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x334c0c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C0Cu;
    SET_GPR_U32(ctx, 31, 0x334C14u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C0Cu, 0x334C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C14u;
label_334c14:
    // 0x334c14: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x334c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x334c18: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334c18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c1c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x334c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334c20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x334c20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c24: 0x26e20008  addiu       $v0, $s7, 0x8
    ctx->pc = 0x334c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334c28: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x334c28u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c2c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x334c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334c30: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x334c30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c34: 0x0  nop
    ctx->pc = 0x334c34u;
    // NOP
label_334c38:
    // 0x334c38: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x334c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x334c3c: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x334C3Cu;
    {
        const bool branch_taken_0x334c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334c3c) {
            ctx->pc = 0x3349C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3349c0;
        }
    }
    ctx->pc = 0x334C44u;
    // 0x334c44: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334c48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x334c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x334c50: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c54: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C54u;
    SET_GPR_U32(ctx, 31, 0x334C5Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C54u, 0x334C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C5Cu;
label_334c5c:
    // 0x334c5c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x334c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x334c60: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x334c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x334c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334C64u;
    {
        const bool branch_taken_0x334c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334c64) {
            ctx->pc = 0x334C84u;
            goto label_334c84;
        }
    }
    ctx->pc = 0x334C6Cu;
    // 0x334c6c: 0x2655001c  addiu       $s5, $s2, 0x1C
    ctx->pc = 0x334c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c70: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x334c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x334c74: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x334c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x334c78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x334c78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c7c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C7Cu;
    SET_GPR_U32(ctx, 31, 0x334C84u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C7Cu, 0x334C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C84u;
label_334c84:
    // 0x334c84: 0x265e001c  addiu       $fp, $s2, 0x1C
    ctx->pc = 0x334c84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c88: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x334c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x334c8c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x334c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x334c90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C94u;
    SET_GPR_U32(ctx, 31, 0x334C9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C94u, 0x334C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C9Cu;
label_334c9c:
    // 0x334c9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x334c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x334ca0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334ca4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334ca8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334cac: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x334cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x334cb0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cb4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x334cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x334cb8: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334cc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x334cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x334cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334cc8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334CC8u;
    SET_GPR_U32(ctx, 31, 0x334CD0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334CC8u, 0x334CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CD0u;
label_334cd0:
    // 0x334cd0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x334cd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x334cd8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x334cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x334cdc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x334cdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x334ce0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x334ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x334ce4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x334ce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x334ce8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x334ce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334cec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x334cecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334cf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x334cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334cf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x334cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334d04: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x334d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x334d08: 0x3e00008  jr          $ra
    ctx->pc = 0x334D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334D10u;
}
