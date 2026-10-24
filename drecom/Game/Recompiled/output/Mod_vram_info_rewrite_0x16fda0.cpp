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

// Function: Mod_vram_info_rewrite
// Address: 0x16fda0 - 0x170130
void Mod_vram_info_rewrite_0x16fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mod_vram_info_rewrite_0x16fda0");
#endif

    ctx->pc = 0x16fda0u;

    // 0x16fda0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16fda4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16fda8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16fdac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16fdb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16fdb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16fdb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16fdbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16fdc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16fdc4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x16fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x16fdc8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x16fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x16fdcc: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x16fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x16fdd0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16fdd4: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x16fdd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x16fdd8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fddc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fde0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fde4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fde8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fdec: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fdf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fdf4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x16fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x16fdf8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x16fdf8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fdfc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16fe00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fe04: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fe08: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16fe0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe10: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x16fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x16fe14: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16fe18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fe1c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fe20: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16fe24: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x16fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe28: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x16fe28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16fe2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16fe30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16fe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fe34: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16fe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16fe38: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x16fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x16fe3c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fe40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fe44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe48: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fe4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fe50: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fe54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe58: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x16fe58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16fe5c: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x16fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x16fe60: 0x3b77e  dsrl32      $s6, $v1, 29
    ctx->pc = 0x16fe60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) >> (32 + 29));
    // 0x16fe64: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16fe68: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fe6c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fe70: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16fe74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe78: 0xac760018  sw          $s6, 0x18($v1)
    ctx->pc = 0x16fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 22));
    // 0x16fe7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fe80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fe84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe88: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fe8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fe90: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fe94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fe98: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16fe98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16fe9c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x16fe9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16fea0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16fea4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fea8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16feac: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16feacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16feb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16feb4: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x16feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x16feb8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16febc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fec4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16fec8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16fecc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16fed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fed4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x16fed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16fed8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16fedc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16fee0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16fee4: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16fee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16feec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x16feecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x16fef0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fef4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fefc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ff00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ff04: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ff08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff0c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x16ff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16ff10: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x16ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ff14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ff18: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16ff1c: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x16ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x16ff20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff24: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x16ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x16ff28: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
    ctx->pc = 0x16FF28u;
    {
        const bool branch_taken_0x16ff28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ff28) {
            ctx->pc = 0x1700ECu;
            goto label_1700ec;
        }
    }
    ctx->pc = 0x16FF30u;
    // 0x16ff30: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ff34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ff38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ff3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ff40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff44: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ff48: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ff4c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ff50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff54: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x16ff54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x16ff58: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x16ff58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x16ff5c: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x16ff5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x16ff60: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16ff64: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FF64u;
    {
        const bool branch_taken_0x16ff64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ff64) {
            ctx->pc = 0x16FF78u;
            goto label_16ff78;
        }
    }
    ctx->pc = 0x16FF6Cu;
    // 0x16ff6c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x16ff6cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16ff70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16FF70u;
    {
        const bool branch_taken_0x16ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ff70) {
            ctx->pc = 0x16FF7Cu;
            goto label_16ff7c;
        }
    }
    ctx->pc = 0x16FF78u;
label_16ff78:
    // 0x16ff78: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16ff78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ff7c:
    // 0x16ff7c: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x16ff7cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ff80: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ff84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ff88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff8c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ff90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ff94: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ff98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ff9c: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x16ff9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ffa0: 0x30713fff  andi        $s1, $v1, 0x3FFF
    ctx->pc = 0x16ffa0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x16ffa4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ffa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ffac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffb0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ffb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ffb8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ffbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffc0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x16ffc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ffc4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x16ffc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ffc8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x16ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ffcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ffd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffd4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x16ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16ffd8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16ffdc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x16ffe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ffe4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x16ffe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16ffe8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16ffe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ffec: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x16ffecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16fff0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x16fff4: 0x2831807  srav        $v1, $v1, $s4
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x16fff8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16fffc: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16fffcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x170000: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170004: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17000c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x17000cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170010: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170014: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x170018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17001c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x17001cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x170020: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x170020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170024: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170028: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x170028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17002c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170030: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170034: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170038: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x170038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x17003c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170040: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x170040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x170044: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170048: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x170048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17004c: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x17004cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x170050: 0x2831807  srav        $v1, $v1, $s4
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x170054: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x170054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x170058: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x170058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17005c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170064: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170068: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17006c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x17006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x170070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170074: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x170074u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x170078: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x170078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x17007c: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x17007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x170080: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x170080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170084: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x170084u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x170088: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x170088u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x17008c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x17008cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x170090: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x170094: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x170098: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x170098u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x17009c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x17009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1700a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700a4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1700a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1700a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1700ac: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1700b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700b4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1700b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1700b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1700b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1700bc: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1700bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1700c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1700c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1700c4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1700c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1700c8: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1700cc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1700d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1700d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1700d4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1700d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1700d8: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1700dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1700dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1700e0: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1700e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1700e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1700E4u;
    {
        const bool branch_taken_0x1700e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700e4) {
            ctx->pc = 0x170104u;
            goto label_170104;
        }
    }
    ctx->pc = 0x1700ECu;
label_1700ec:
    // 0x1700ec: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1700f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1700f4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1700f8: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x1700f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1700fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1700fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170100: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x170100u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
label_170104:
    // 0x170104: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x170104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170108: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x170108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17010c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17010cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x170110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x170114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17011c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17011cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170124: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x170124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x170128: 0x3e00008  jr          $ra
    ctx->pc = 0x170128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170130u;
}
