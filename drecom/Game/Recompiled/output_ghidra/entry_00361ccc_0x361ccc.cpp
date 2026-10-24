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

// Function: entry_00361ccc
// Address: 0x361ccc - 0x361e44
void entry_00361ccc_0x361ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361ccc_0x361ccc");
#endif

    switch (ctx->pc) {
        case 0x361d1cu: goto label_361d1c;
        case 0x361d40u: goto label_361d40;
        case 0x361d64u: goto label_361d64;
        case 0x361d88u: goto label_361d88;
        case 0x361dacu: goto label_361dac;
        case 0x361dd0u: goto label_361dd0;
        case 0x361df4u: goto label_361df4;
        case 0x361e18u: goto label_361e18;
        case 0x361e30u: goto label_361e30;
        default: break;
    }

    ctx->pc = 0x361cccu;

    // 0x361ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361cd0: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x361cd4: 0x8e221344  lw          $v0, 0x1344($s1)
    ctx->pc = 0x361cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x361cd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x361cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361cdc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x361CDCu;
    {
        const bool branch_taken_0x361cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361cdc) {
            ctx->pc = 0x361E44u;
            return;
        }
    }
    ctx->pc = 0x361CE4u;
    // 0x361ce4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x361ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x361ce8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x361ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x361cec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x361cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x361cf0: 0x8e221348  lw          $v0, 0x1348($s1)
    ctx->pc = 0x361cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4936)));
    // 0x361cf4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x361cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361cf8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d00: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d04: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361d10: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x361d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x361d14: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D14u;
    SET_GPR_U32(ctx, 31, 0x361D1Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D1Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D1Cu) { return; }
    ctx->pc = 0x361D1Cu;
label_361d1c:
    // 0x361d1c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d24: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d28: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d2c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361d34: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x361d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x361d38: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D38u;
    SET_GPR_U32(ctx, 31, 0x361D40u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D40u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D40u) { return; }
    ctx->pc = 0x361D40u;
label_361d40:
    // 0x361d40: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d48: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d4c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x361d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x361d58: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x361d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x361d5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D5Cu;
    SET_GPR_U32(ctx, 31, 0x361D64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D64u) { return; }
    ctx->pc = 0x361D64u;
label_361d64:
    // 0x361d64: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d6c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d70: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d74: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x361d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x361d7c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x361d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x361d80: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361D80u;
    SET_GPR_U32(ctx, 31, 0x361D88u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361D88u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361D88u) { return; }
    ctx->pc = 0x361D88u;
label_361d88:
    // 0x361d88: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361d8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361d90: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361d94: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361d98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361d9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x361d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361da0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x361da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361da4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DA4u;
    SET_GPR_U32(ctx, 31, 0x361DACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DACu) { return; }
    ctx->pc = 0x361DACu;
label_361dac:
    // 0x361dac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361db4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361db8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361dbc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361dc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361dc4: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x361dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x361dc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DC8u;
    SET_GPR_U32(ctx, 31, 0x361DD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DD0u) { return; }
    ctx->pc = 0x361DD0u;
label_361dd0:
    // 0x361dd0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361dd8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361ddc: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361de0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361de4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x361de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x361de8: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x361de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x361dec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361DECu;
    SET_GPR_U32(ctx, 31, 0x361DF4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361DF4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361DF4u) { return; }
    ctx->pc = 0x361DF4u;
label_361df4:
    // 0x361df4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361dfc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361e00: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361e04: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361e08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x361e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x361e0c: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x361e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x361e10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361E10u;
    SET_GPR_U32(ctx, 31, 0x361E18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361E18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361E18u) { return; }
    ctx->pc = 0x361E18u;
label_361e18:
    // 0x361e18: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x361e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x361e1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x361e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x361e20: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x361e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x361e24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x361e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361e28: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x361E28u;
    SET_GPR_U32(ctx, 31, 0x361E30u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x361E28u, 0x361E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E30u;
label_361e30:
    // 0x361e30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361E30u;
    {
        const bool branch_taken_0x361e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e30) {
            ctx->pc = 0x361E44u;
            return;
        }
    }
    ctx->pc = 0x361E38u;
    // 0x361e38: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x361e38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x361e3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x361E3Cu;
    {
        const bool branch_taken_0x361e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e3c) {
            ctx->pc = 0x361E98u;
            return;
        }
    }
    ctx->pc = 0x361E44u;
}
