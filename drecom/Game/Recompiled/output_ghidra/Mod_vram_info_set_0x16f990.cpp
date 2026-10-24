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

// Function: Mod_vram_info_set
// Address: 0x16f990 - 0x16fd94
void Mod_vram_info_set_0x16f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mod_vram_info_set_0x16f990");
#endif

    switch (ctx->pc) {
        case 0x16f9ecu: goto label_16f9ec;
        default: break;
    }

    ctx->pc = 0x16f990u;

    // 0x16f990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16f994: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16f998: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f99c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f9a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f9a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f9a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f9b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f9b8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x16f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x16f9bc: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x16f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x16f9c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16f9c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f9c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16f9c8: 0x247e0080  addiu       $fp, $v1, 0x80
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x16f9cc: 0x8fc30a68  lw          $v1, 0xA68($fp)
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16f9d0: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x16f9d4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f9d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16f9dc: 0xafc30a68  sw          $v1, 0xA68($fp)
    ctx->pc = 0x16f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2664), GPR_U32(ctx, 3));
    // 0x16f9e0: 0x8fc40a68  lw          $a0, 0xA68($fp)
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2664)));
    // 0x16f9e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f9e8: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x16f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
label_16f9ec:
    // 0x16f9ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16f9f0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16f9f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16f9fc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fa00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fa04: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fa08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa0c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x16fa10: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x16fa10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fa14: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa18: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa1c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa24: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x16fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x16fa28: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa2c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa30: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa34: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x16fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa38: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x16fa38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16fa3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fa40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16fa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fa44: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16fa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16fa48: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x16fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x16fa4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fa50: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fa54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa5c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fa60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fa64: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fa68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa6c: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x16fa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16fa70: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x16fa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x16fa74: 0x3bf7e  dsrl32      $s7, $v1, 29
    ctx->pc = 0x16fa74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) >> (32 + 29));
    // 0x16fa78: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fa7c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fa80: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fa84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa88: 0xac770018  sw          $s7, 0x18($v1)
    ctx->pc = 0x16fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 23));
    // 0x16fa8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fa90: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fa94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fa9c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16faa0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16faa4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16faa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16faac: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16faacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fab0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x16fab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fab4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fab8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fabc: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fac4: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x16fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x16fac8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16facc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fad0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fad8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fadc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fae0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fae8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16faec: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16faf0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16faf4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16faf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fafc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16fb00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb04: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb10: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fb14: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fb18: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fb1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16fb24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fb28: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fb2c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fb30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb34: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x16fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x16fb38: 0x12e00074  beqz        $s7, . + 4 + (0x74 << 2)
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FD0Cu;
            goto label_16fd0c;
        }
    }
    ctx->pc = 0x16FB40u;
    // 0x16fb40: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb44: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb50: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fb54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fb58: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fb5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb60: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x16fb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x16fb64: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x16fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x16fb68: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x16fb6c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x16fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16fb70: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FB70u;
    {
        const bool branch_taken_0x16fb70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fb70) {
            ctx->pc = 0x16FB84u;
            goto label_16fb84;
        }
    }
    ctx->pc = 0x16FB78u;
    // 0x16fb78: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x16fb78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16fb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16FB7Cu;
    {
        const bool branch_taken_0x16fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb7c) {
            ctx->pc = 0x16FB88u;
            goto label_16fb88;
        }
    }
    ctx->pc = 0x16FB84u;
label_16fb84:
    // 0x16fb84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16fb84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fb88:
    // 0x16fb88: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x16fb88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x16fb8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fb90: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fb94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fb9c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fba0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fba4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbac: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x16fbacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16fbb0: 0x30723fff  andi        $s2, $v1, 0x3FFF
    ctx->pc = 0x16fbb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x16fbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fbb8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fbbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fbc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbc4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fbc8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fbcc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fbd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbd4: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16fbd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fbd8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fbdc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x16fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fbe0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x16fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16fbe4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fbe8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fbec: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16fbf0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x16fbf4: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x16fbf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fbfc: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x16fbfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16fc00: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16fc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16fc04: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16fc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fc08: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x16fc08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x16fc0c: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x16fc0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x16fc10: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x16fc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x16fc14: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x16fc14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16fc18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc1c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fc20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fc24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc28: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fc2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fc30: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fc34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc38: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16fc38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fc3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16fc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fc40: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc44: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16fc48: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fc4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fc50: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x16fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16fc54: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x16fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x16fc58: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x16fc5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16fc60: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x16fc60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16fc64: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16fc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16fc68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16fc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fc6c: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x16fc70: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x16fc74: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x16fc78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fc7c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x16fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16fc80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fc84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc88: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fc8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fc90: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fc94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fc98: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x16fc98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16fc9c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x16fc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x16fca0: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x16fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x16fca4: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x16fca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fca8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x16fca8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x16fcac: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x16fcb0: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16fcb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16fcb4: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x16fcb4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x16fcb8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x16fcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x16fcbc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16fcbcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16fcc0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x16fcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x16fcc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fcc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fcc8: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x16fcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x16fccc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16fcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16fcd0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x16fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x16fcd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fcd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fcd8: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x16fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x16fcdc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16fcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16fce0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x16fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x16fce4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fce8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x16fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x16fcec: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x16fcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16fcf0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fcf4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fcf8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fcfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fd00: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x16fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x16fd04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FD04u;
    {
        const bool branch_taken_0x16fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fd04) {
            ctx->pc = 0x16FD20u;
            goto label_16fd20;
        }
    }
    ctx->pc = 0x16FD0Cu;
label_16fd0c:
    // 0x16fd0c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd10: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x16fd14: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x16fd18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fd1c: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x16fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
label_16fd20:
    // 0x16fd20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16fd24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd28: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x16fd2c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x16fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16fd30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16fd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16fd34: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x16fd34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16fd38: 0x1460ff2c  bnez        $v1, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x16FD38u;
    {
        const bool branch_taken_0x16fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fd38) {
            ctx->pc = 0x16F9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9ec;
        }
    }
    ctx->pc = 0x16FD40u;
    // 0x16fd40: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fd44: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x16fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x16fd48: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x16fd48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16fd4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16fd50: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fd54: 0x27c40a68  addiu       $a0, $fp, 0xA68
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2664));
    // 0x16fd58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16fd60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16fd64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16fd64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16fd68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16fd68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16fd6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16fd6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fd70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16fd70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fd74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16fd74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fd78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16fd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fd7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fd80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fd88: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD94u;
}
