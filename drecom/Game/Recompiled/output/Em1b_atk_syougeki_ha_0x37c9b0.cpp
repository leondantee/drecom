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

// Function: Em1b_atk_syougeki_ha
// Address: 0x37c9b0 - 0x37cc1c
void Em1b_atk_syougeki_ha_0x37c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_atk_syougeki_ha_0x37c9b0");
#endif

    switch (ctx->pc) {
        case 0x37ca1cu: goto label_37ca1c;
        case 0x37ca4cu: goto label_37ca4c;
        case 0x37ca8cu: goto label_37ca8c;
        case 0x37cab8u: goto label_37cab8;
        case 0x37cad8u: goto label_37cad8;
        case 0x37caecu: goto label_37caec;
        case 0x37cbb4u: goto label_37cbb4;
        case 0x37cbbcu: goto label_37cbbc;
        case 0x37cbf4u: goto label_37cbf4;
        case 0x37cbfcu: goto label_37cbfc;
        default: break;
    }

    ctx->pc = 0x37c9b0u;

    // 0x37c9b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x37c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x37c9b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x37c9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x37c9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c9c0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x37c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x37c9c4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x37c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x37c9c8: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x37c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x37c9cc: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x37c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x37c9d0: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x37c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x37c9d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37c9d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c9dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x37c9e0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x37c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x37c9e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c9e8: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x37c9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x37c9ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x37c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37c9f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C9F0u;
    {
        const bool branch_taken_0x37c9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9f0) {
            ctx->pc = 0x37CA10u;
            goto label_37ca10;
        }
    }
    ctx->pc = 0x37C9F8u;
    // 0x37c9f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x37c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37c9fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37c9fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca00: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x37ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37ca04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37CA08u;
    {
        const bool branch_taken_0x37ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca08) {
            ctx->pc = 0x37CA1Cu;
            goto label_37ca1c;
        }
    }
    ctx->pc = 0x37CA10u;
label_37ca10:
    // 0x37ca10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37ca14: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA14u;
    SET_GPR_U32(ctx, 31, 0x37CA1Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA14u, 0x37CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA1Cu;
label_37ca1c:
    // 0x37ca1c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37ca20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CA20u;
    {
        const bool branch_taken_0x37ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca20) {
            ctx->pc = 0x37CA40u;
            goto label_37ca40;
        }
    }
    ctx->pc = 0x37CA28u;
    // 0x37ca28: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37ca2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca30: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x37ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37CA38u;
    {
        const bool branch_taken_0x37ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca38) {
            ctx->pc = 0x37CA4Cu;
            goto label_37ca4c;
        }
    }
    ctx->pc = 0x37CA40u;
label_37ca40:
    // 0x37ca40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA44u;
    SET_GPR_U32(ctx, 31, 0x37CA4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA44u, 0x37CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA4Cu;
label_37ca4c:
    // 0x37ca4c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x37ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca54: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x37ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x37ca58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ca60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CA60u;
    {
        const bool branch_taken_0x37ca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca60) {
            ctx->pc = 0x37CA80u;
            goto label_37ca80;
        }
    }
    ctx->pc = 0x37CA68u;
    // 0x37ca68: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ca6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37ca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x37ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37ca74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37ca78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37CA78u;
    {
        const bool branch_taken_0x37ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca78) {
            ctx->pc = 0x37CA9Cu;
            goto label_37ca9c;
        }
    }
    ctx->pc = 0x37CA80u;
label_37ca80:
    // 0x37ca80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x37ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37ca84: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA84u;
    SET_GPR_U32(ctx, 31, 0x37CA8Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA84u, 0x37CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA8Cu;
label_37ca8c:
    // 0x37ca8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x37ca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ca94: 0x0  nop
    ctx->pc = 0x37ca94u;
    // NOP
    // 0x37ca98: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x37ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_37ca9c:
    // 0x37ca9c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x37ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37caa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37caa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37caa4: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x37caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x37caa8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37caac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37caacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37cab0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x37CAB0u;
    SET_GPR_U32(ctx, 31, 0x37CAB8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x37CAB8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAB8u) { return; }
    ctx->pc = 0x37CAB8u;
label_37cab8:
    // 0x37cab8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x37cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cabc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37CABCu;
    {
        const bool branch_taken_0x37cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cabc) {
            ctx->pc = 0x37CAF4u;
            goto label_37caf4;
        }
    }
    ctx->pc = 0x37CAC4u;
    // 0x37cac4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37cac8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x37cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cacc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x37caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37cad0: 0xc040d62  jal         func_103588
    ctx->pc = 0x37CAD0u;
    SET_GPR_U32(ctx, 31, 0x37CAD8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x37CAD8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAD8u) { return; }
    ctx->pc = 0x37CAD8u;
label_37cad8:
    // 0x37cad8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x37cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37cadc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x37cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cae0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x37cae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37cae4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x37CAE4u;
    SET_GPR_U32(ctx, 31, 0x37CAECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x37CAECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAECu) { return; }
    ctx->pc = 0x37CAECu;
label_37caec:
    // 0x37caec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37CAECu;
    {
        const bool branch_taken_0x37caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37caec) {
            ctx->pc = 0x37CB04u;
            goto label_37cb04;
        }
    }
    ctx->pc = 0x37CAF4u;
label_37caf4:
    // 0x37caf4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x37caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37caf8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x37caf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cafc: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x37cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37cb00: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_37cb04:
    // 0x37cb04: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x37cb04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x37cb08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37cb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37cb0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cb10: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x37CB10u;
    {
        const bool branch_taken_0x37cb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb10) {
            ctx->pc = 0x37CB8Cu;
            goto label_37cb8c;
        }
    }
    ctx->pc = 0x37CB18u;
    // 0x37cb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb1c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37CB1Cu;
    {
        const bool branch_taken_0x37cb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb1c) {
            ctx->pc = 0x37CB2Cu;
            goto label_37cb2c;
        }
    }
    ctx->pc = 0x37CB24u;
    // 0x37cb24: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x37CB24u;
    {
        const bool branch_taken_0x37cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb24) {
            ctx->pc = 0x37CBE4u;
            goto label_37cbe4;
        }
    }
    ctx->pc = 0x37CB2Cu;
label_37cb2c:
    // 0x37cb2c: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x37cb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cb30: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cb34: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x37cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x37cb38: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb3c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x37cb40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb44: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x37cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x37cb48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x37cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37cb4c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37cb50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37cb54: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x37cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x37cb58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb5c: 0x0  nop
    ctx->pc = 0x37cb5cu;
    // NOP
    // 0x37cb60: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x37cb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x37cb64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb6c: 0x0  nop
    ctx->pc = 0x37cb6cu;
    // NOP
    // 0x37cb70: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x37cb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x37cb74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb7c: 0x0  nop
    ctx->pc = 0x37cb7cu;
    // NOP
    // 0x37cb80: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x37cb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x37cb84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x37CB84u;
    {
        const bool branch_taken_0x37cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb84) {
            ctx->pc = 0x37CBE4u;
            goto label_37cbe4;
        }
    }
    ctx->pc = 0x37CB8Cu;
label_37cb8c:
    // 0x37cb8c: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x37cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cb90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb94: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x37cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x37cb98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb9c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x37cba0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cba4: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x37cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x37cba8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x37cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37cbac: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37cbb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_37cbb4:
    // 0x37cbb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cbbc:
    // 0x37cbbc: 0x0  nop
    ctx->pc = 0x37cbbcu;
    // NOP
    // 0x37cbc0: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x37cbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x37cbc4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x37cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x37cbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbcc: 0x0  nop
    ctx->pc = 0x37cbccu;
    // NOP
    // 0x37cbd0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x37cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x37cbd4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cbd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbdc: 0x0  nop
    ctx->pc = 0x37cbdcu;
    // NOP
    // 0x37cbe0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x37cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_37cbe4:
    // 0x37cbe4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x37cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37cbe8: 0xae03128c  sw          $v1, 0x128C($s0)
    ctx->pc = 0x37cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4748), GPR_U32(ctx, 3));
    // 0x37cbec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cbf0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x37cbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_37cbf4:
    // 0x37cbf4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x37cbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cbf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x37cbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_37cbfc:
    // 0x37cbfc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x37cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cc00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x37cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x37cc04: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x37cc04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37cc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc10: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x37cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x37cc14: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC1Cu;
}
