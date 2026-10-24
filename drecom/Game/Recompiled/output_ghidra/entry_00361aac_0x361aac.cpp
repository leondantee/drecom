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

// Function: entry_00361aac
// Address: 0x361aac - 0x361c24
void entry_00361aac_0x361aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361aac_0x361aac");
#endif

    switch (ctx->pc) {
        case 0x361afcu: goto label_361afc;
        case 0x361b20u: goto label_361b20;
        case 0x361b44u: goto label_361b44;
        case 0x361b68u: goto label_361b68;
        case 0x361b8cu: goto label_361b8c;
        case 0x361bb0u: goto label_361bb0;
        case 0x361bd4u: goto label_361bd4;
        case 0x361bf8u: goto label_361bf8;
        case 0x361c10u: goto label_361c10;
        default: break;
    }

    ctx->pc = 0x361aacu;

    // 0x361aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361ab0: 0x2421804  sllv        $v1, $v0, $s2
    ctx->pc = 0x361ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x361ab4: 0x8e221344  lw          $v0, 0x1344($s1)
    ctx->pc = 0x361ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x361ab8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x361ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x361abc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x361ABCu;
    {
        const bool branch_taken_0x361abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361abc) {
            ctx->pc = 0x361C24u;
            return;
        }
    }
    ctx->pc = 0x361AC4u;
    // 0x361ac4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x361ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x361ac8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x361ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x361acc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x361accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x361ad0: 0x8e221348  lw          $v0, 0x1348($s1)
    ctx->pc = 0x361ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4936)));
    // 0x361ad4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x361ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361ad8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361ae0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361ae4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361ae8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361aec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361af0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x361af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x361af4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361AF4u;
    SET_GPR_U32(ctx, 31, 0x361AFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361AFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361AFCu) { return; }
    ctx->pc = 0x361AFCu;
label_361afc:
    // 0x361afc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b04: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b08: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361b14: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x361b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x361b18: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B18u;
    SET_GPR_U32(ctx, 31, 0x361B20u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B20u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B20u) { return; }
    ctx->pc = 0x361B20u;
label_361b20:
    // 0x361b20: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b2c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b30: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x361b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x361b38: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x361b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x361b3c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B3Cu;
    SET_GPR_U32(ctx, 31, 0x361B44u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B44u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B44u) { return; }
    ctx->pc = 0x361B44u;
label_361b44:
    // 0x361b44: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b4c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b50: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x361b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x361b5c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x361b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x361b60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B60u;
    SET_GPR_U32(ctx, 31, 0x361B68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B68u) { return; }
    ctx->pc = 0x361B68u;
label_361b68:
    // 0x361b68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b70: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b74: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361b7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x361b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361b80: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x361b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x361b84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361B84u;
    SET_GPR_U32(ctx, 31, 0x361B8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361B8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361B8Cu) { return; }
    ctx->pc = 0x361B8Cu;
label_361b8c:
    // 0x361b8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361b94: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361b98: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361b9c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361ba0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361ba4: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x361ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x361ba8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BA8u;
    SET_GPR_U32(ctx, 31, 0x361BB0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BB0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BB0u) { return; }
    ctx->pc = 0x361BB0u;
label_361bb0:
    // 0x361bb0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361bb8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361bbc: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361bc0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361bc4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x361bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x361bc8: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x361bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x361bcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BCCu;
    SET_GPR_U32(ctx, 31, 0x361BD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BD4u) { return; }
    ctx->pc = 0x361BD4u;
label_361bd4:
    // 0x361bd4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x361bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361bd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361bdc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x361bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x361be0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x361be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x361be4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x361be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361be8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x361be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x361bec: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x361becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x361bf0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x361BF0u;
    SET_GPR_U32(ctx, 31, 0x361BF8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x361BF8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x361BF8u) { return; }
    ctx->pc = 0x361BF8u;
label_361bf8:
    // 0x361bf8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x361bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x361bfc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x361bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x361c00: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x361c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x361c04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x361c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361c08: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x361C08u;
    SET_GPR_U32(ctx, 31, 0x361C10u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x361C08u, 0x361C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C10u;
label_361c10:
    // 0x361c10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361C10u;
    {
        const bool branch_taken_0x361c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c10) {
            ctx->pc = 0x361C24u;
            return;
        }
    }
    ctx->pc = 0x361C18u;
    // 0x361c18: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x361c18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x361c1c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x361C1Cu;
    {
        const bool branch_taken_0x361c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c1c) {
            ctx->pc = 0x361E98u;
            return;
        }
    }
    ctx->pc = 0x361C24u;
}
