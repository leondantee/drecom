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

// Function: Plw03_atk03_atk
// Address: 0x1c5aa0 - 0x1c5c3c
void Plw03_atk03_atk_0x1c5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk03_atk_0x1c5aa0");
#endif

    switch (ctx->pc) {
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b28u: goto label_1c5b28;
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5becu: goto label_1c5bec;
        case 0x1c5c00u: goto label_1c5c00;
        case 0x1c5c0cu: goto label_1c5c0c;
        case 0x1c5c28u: goto label_1c5c28;
        default: break;
    }

    ctx->pc = 0x1c5aa0u;

    // 0x1c5aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5aa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c5aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5aac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c5ab0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c5ab4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c5ab8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c5abc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c5abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5ac0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5ac4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5ac8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5acc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c5accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5ad0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ad8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C5AD8u;
    {
        const bool branch_taken_0x1c5ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5ad8) {
            ctx->pc = 0x1C5B44u;
            goto label_1c5b44;
        }
    }
    ctx->pc = 0x1C5AE0u;
    // 0x1c5ae0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5AE0u;
    {
        const bool branch_taken_0x1c5ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ae0) {
            ctx->pc = 0x1C5AF0u;
            goto label_1c5af0;
        }
    }
    ctx->pc = 0x1C5AE8u;
    // 0x1c5ae8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C5AE8u;
    {
        const bool branch_taken_0x1c5ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ae8) {
            ctx->pc = 0x1C5C28u;
            goto label_1c5c28;
        }
    }
    ctx->pc = 0x1C5AF0u;
label_1c5af0:
    // 0x1c5af0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5af4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5af8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5afc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c5b00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5b08: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5B08u;
    SET_GPR_U32(ctx, 31, 0x1C5B10u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5B08u, 0x1C5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b14: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5b18: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c5b1c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1c5b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c5b20: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5B20u;
    SET_GPR_U32(ctx, 31, 0x1C5B28u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5B20u, 0x1C5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B28u;
label_1c5b28:
    // 0x1c5b28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c5b30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b38: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5b40: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5b44:
    // 0x1c5b44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b48: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c5b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c5b4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c5b50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5b54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5B54u;
    {
        const bool branch_taken_0x1c5b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b54) {
            ctx->pc = 0x1C5B74u;
            goto label_1c5b74;
        }
    }
    ctx->pc = 0x1C5B5Cu;
    // 0x1c5b5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c5b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c5b64: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c5b68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c5b6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c5b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c5b70: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c5b74:
    // 0x1c5b74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b78: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c5b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c5b7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c5b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c5b80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c5b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5B84u;
    {
        const bool branch_taken_0x1c5b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b84) {
            ctx->pc = 0x1C5BA0u;
            goto label_1c5ba0;
        }
    }
    ctx->pc = 0x1C5B8Cu;
    // 0x1c5b8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c5b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c5b90: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c5b94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c5b98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c5b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c5b9c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c5b9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c5ba0:
    // 0x1c5ba0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5ba4: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c5ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c5ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c5ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c5bac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c5bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c5bb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5BB0u;
    {
        const bool branch_taken_0x1c5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bb0) {
            ctx->pc = 0x1C5BD0u;
            goto label_1c5bd0;
        }
    }
    ctx->pc = 0x1C5BB8u;
    // 0x1c5bb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c5bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c5bbc: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c5bc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c5bc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c5bc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c5bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c5bcc: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c5bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c5bd0:
    // 0x1c5bd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5bd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5bd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5BD8u;
    SET_GPR_U32(ctx, 31, 0x1C5BE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5BD8u, 0x1C5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BE0u;
label_1c5be0:
    // 0x1c5be0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5be4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5BE4u;
    SET_GPR_U32(ctx, 31, 0x1C5BECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5BE4u, 0x1C5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BECu;
label_1c5bec:
    // 0x1c5bec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5bf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5bf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5bf8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5BF8u;
    SET_GPR_U32(ctx, 31, 0x1C5C00u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5BF8u, 0x1C5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C00u;
label_1c5c00:
    // 0x1c5c00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5c04: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5C04u;
    SET_GPR_U32(ctx, 31, 0x1C5C0Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5C04u, 0x1C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5c10: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c5c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c5c14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C14u;
    {
        const bool branch_taken_0x1c5c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c14) {
            ctx->pc = 0x1C5C28u;
            goto label_1c5c28;
        }
    }
    ctx->pc = 0x1C5C1Cu;
    // 0x1c5c1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5c20: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C5C20u;
    SET_GPR_U32(ctx, 31, 0x1C5C28u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C5C20u, 0x1C5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C28u;
label_1c5c28:
    // 0x1c5c28: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c5c28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5C3Cu;
}
