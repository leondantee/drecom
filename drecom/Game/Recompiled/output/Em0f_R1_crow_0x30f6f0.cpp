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

// Function: Em0f_R1_crow
// Address: 0x30f6f0 - 0x30fc50
void Em0f_R1_crow_0x30f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_crow_0x30f6f0");
#endif

    switch (ctx->pc) {
        case 0x30f7a8u: goto label_30f7a8;
        case 0x30f93cu: goto label_30f93c;
        case 0x30fa5cu: goto label_30fa5c;
        case 0x30fa94u: goto label_30fa94;
        case 0x30faa0u: goto label_30faa0;
        case 0x30fab0u: goto label_30fab0;
        case 0x30fabcu: goto label_30fabc;
        case 0x30fb38u: goto label_30fb38;
        default: break;
    }

    ctx->pc = 0x30f6f0u;

    // 0x30f6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30f6f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x30f6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x30f6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30f6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30f6fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30f704: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x30f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x30f708: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x30f708u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f70c: 0x922309db  lbu         $v1, 0x9DB($s1)
    ctx->pc = 0x30f70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2523)));
    // 0x30f710: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x30f710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f714: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x30f714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x30f718: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x30F718u;
    {
        const bool branch_taken_0x30f718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f718) {
            ctx->pc = 0x30F888u;
            goto label_30f888;
        }
    }
    ctx->pc = 0x30F720u;
    // 0x30f720: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f724: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f728: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f72c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x30f72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f730: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30f734: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x30f734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x30f738: 0x402027  not         $a0, $v0
    ctx->pc = 0x30f738u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x30f73c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f740: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f744: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30f744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30f748: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30f748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30f74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f750: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30f750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30f754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30f758: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x30f758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f75c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x30f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x30f760: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x30f760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x30f764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f768: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f76c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30f76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30f770: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30f770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30f774: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f778: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30f778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30f77c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30f780: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f784: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30f788: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f78c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f790: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f798: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f79c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f7a0: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30F7A0u;
    SET_GPR_U32(ctx, 31, 0x30F7A8u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30F7A0u, 0x30F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F7A8u;
label_30f7a8:
    // 0x30f7a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f7ac: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f7acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f7b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f7b4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x30f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f7b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30f7bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f7c0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f7c4: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30f7c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f7cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f7d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f7d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f7d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f7dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30f7e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f7e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f7e8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30f7ec: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30f7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f7f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x30f7f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30f7f4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x30f7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30f7f8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30f7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30f7fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30f800: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30f804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f808: 0x0  nop
    ctx->pc = 0x30f808u;
    // NOP
    // 0x30f80c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30f80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30f810: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f818: 0x0  nop
    ctx->pc = 0x30f818u;
    // NOP
    // 0x30f81c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30f81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30f820: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f828: 0x0  nop
    ctx->pc = 0x30f828u;
    // NOP
    // 0x30f82c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30f830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f834: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f838: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f83c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x30f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f840: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30f844: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30f844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f848: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f84c: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30f850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f858: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30f858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30f85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f860: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f864: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f868: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30f86c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x30f86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f870: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x30f870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x30f874: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x30f874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x30f878: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x30f878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30f87c: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x30f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x30f880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f884: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x30f884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_30f888:
    // 0x30f888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f88c: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f890: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30f890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30f894: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30f894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30f898: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x30F898u;
    {
        const bool branch_taken_0x30f898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f898) {
            ctx->pc = 0x30FA14u;
            goto label_30fa14;
        }
    }
    ctx->pc = 0x30F8A0u;
    // 0x30f8a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f8a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f8a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f8ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x30f8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x30f8b0: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x30F8B0u;
    {
        const bool branch_taken_0x30f8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f8b0) {
            ctx->pc = 0x30FA14u;
            goto label_30fa14;
        }
    }
    ctx->pc = 0x30F8B8u;
    // 0x30f8b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f8bc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30f8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30f8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30f8c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x30f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f8c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f8cc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x30f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x30f8d0: 0x402027  not         $a0, $v0
    ctx->pc = 0x30f8d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x30f8d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f8d8: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f8dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30f8e0: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30f8e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f8e8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30f8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30f8ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30f8f0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x30f8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f8f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x30f8f8: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x30f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x30f8fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f900: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f904: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30f908: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30f908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30f90c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f910: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30f910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30f914: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30f918: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f91c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f920: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f924: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f92c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30f930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f934: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30F934u;
    SET_GPR_U32(ctx, 31, 0x30F93Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30F934u, 0x30F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F93Cu;
label_30f93c:
    // 0x30f93c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f940: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f944: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f948: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x30f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f94c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f950: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f954: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30f958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f95c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f960: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f964: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f968: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f96c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30f970: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f978: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30f97c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30f97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f980: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x30f980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30f984: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x30f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30f988: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30f988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30f98c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30f990: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30f990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30f994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f998: 0x0  nop
    ctx->pc = 0x30f998u;
    // NOP
    // 0x30f99c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30f99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30f9a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f9a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f9a8: 0x0  nop
    ctx->pc = 0x30f9a8u;
    // NOP
    // 0x30f9ac: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30f9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30f9b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f9b8: 0x0  nop
    ctx->pc = 0x30f9b8u;
    // NOP
    // 0x30f9bc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30f9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30f9c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f9c4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30f9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30f9c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f9cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x30f9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f9d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f9d4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f9d8: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30f9dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f9e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f9e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30f9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f9ec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30f9f4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30f9f8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x30f9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f9fc: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x30f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x30fa00: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x30fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x30fa04: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x30fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fa08: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x30fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x30fa0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa10: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x30fa10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_30fa14:
    // 0x30fa14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa18: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30fa18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fa1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30fa1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30fa20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa24: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FA24u;
    {
        const bool branch_taken_0x30fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fa24) {
            ctx->pc = 0x30FA74u;
            goto label_30fa74;
        }
    }
    ctx->pc = 0x30FA2Cu;
    // 0x30fa2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FA2Cu;
    {
        const bool branch_taken_0x30fa2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fa2c) {
            ctx->pc = 0x30FA3Cu;
            goto label_30fa3c;
        }
    }
    ctx->pc = 0x30FA34u;
    // 0x30fa34: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x30FA34u;
    {
        const bool branch_taken_0x30fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fa34) {
            ctx->pc = 0x30FB14u;
            goto label_30fb14;
        }
    }
    ctx->pc = 0x30FA3Cu;
label_30fa3c:
    // 0x30fa3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fa48: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x30fa4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30fa50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fa54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FA54u;
    SET_GPR_U32(ctx, 31, 0x30FA5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FA54u, 0x30FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA5Cu;
label_30fa5c:
    // 0x30fa5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x30fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30fa60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fa64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30fa6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fa70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30fa74:
    // 0x30fa74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa78: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30fa78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30fa7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fa80: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30fa84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fa88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fa8c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FA8Cu;
    SET_GPR_U32(ctx, 31, 0x30FA94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FA8Cu, 0x30FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA94u;
label_30fa94:
    // 0x30fa94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fa98: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FA98u;
    SET_GPR_U32(ctx, 31, 0x30FAA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FA98u, 0x30FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAA0u;
label_30faa0:
    // 0x30faa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30faa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30faa8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FAA8u;
    SET_GPR_U32(ctx, 31, 0x30FAB0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FAA8u, 0x30FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAB0u;
label_30fab0:
    // 0x30fab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fab4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FAB4u;
    SET_GPR_U32(ctx, 31, 0x30FABCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FAB4u, 0x30FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FABCu;
label_30fabc:
    // 0x30fabc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fac0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30fac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30fac4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FAC4u;
    {
        const bool branch_taken_0x30fac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fac4) {
            ctx->pc = 0x30FB14u;
            goto label_30fb14;
        }
    }
    ctx->pc = 0x30FACCu;
    // 0x30facc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30faccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fad0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fad4: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x30fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x30fad8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30fadc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fae0: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30fae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30faecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30faf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30faf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30faf8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30faf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fafc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30fb08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30fb14:
    // 0x30fb14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb18: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30fb1c: 0x3c0301fe  lui         $v1, 0x1FE
    ctx->pc = 0x30fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)510 << 16));
    // 0x30fb20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fb24: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x30FB24u;
    {
        const bool branch_taken_0x30fb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb24) {
            ctx->pc = 0x30FC1Cu;
            goto label_30fc1c;
        }
    }
    ctx->pc = 0x30FB2Cu;
    // 0x30fb2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30fb2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fb30: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x30FB30u;
    {
        const bool branch_taken_0x30fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb30) {
            ctx->pc = 0x30FC08u;
            goto label_30fc08;
        }
    }
    ctx->pc = 0x30FB38u;
label_30fb38:
    // 0x30fb38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb3c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30fb40: 0x2232004  sllv        $a0, $v1, $s1
    ctx->pc = 0x30fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30fb44: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x30fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fb48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30fb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30fb4c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x30FB4Cu;
    {
        const bool branch_taken_0x30fb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb4c) {
            ctx->pc = 0x30FC00u;
            goto label_30fc00;
        }
    }
    ctx->pc = 0x30FB54u;
    // 0x30fb54: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30fb58: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30fb5c: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x30fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x30fb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fb68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fb6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fb74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30fb78: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30fb7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb80: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30fb84: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb88: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x30fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fb8c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x30fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x30fb90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30fb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb98: 0x0  nop
    ctx->pc = 0x30fb98u;
    // NOP
    // 0x30fb9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30fb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30fba0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30fba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30fba4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x30fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fba8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fbb0: 0x0  nop
    ctx->pc = 0x30fbb0u;
    // NOP
    // 0x30fbb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fbb8: 0x0  nop
    ctx->pc = 0x30fbb8u;
    // NOP
    // 0x30fbbc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x30FBBCu;
    {
        const bool branch_taken_0x30fbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fbbc) {
            ctx->pc = 0x30FC00u;
            goto label_30fc00;
        }
    }
    ctx->pc = 0x30FBC4u;
    // 0x30fbc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fbcc: 0x0  nop
    ctx->pc = 0x30fbccu;
    // NOP
    // 0x30fbd0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30fbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30fbd4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x30fbd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30fbd8: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x30fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x30fbdc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fbe0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30fbe4: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x30fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30fbe8: 0x602827  not         $a1, $v1
    ctx->pc = 0x30fbe8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30fbec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fbf0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30fbf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30fbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30fbf8: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x30fbfc: 0x0  nop
    ctx->pc = 0x30fbfcu;
    // NOP
label_30fc00:
    // 0x30fc00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30fc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30fc04: 0x0  nop
    ctx->pc = 0x30fc04u;
    // NOP
label_30fc08:
    // 0x30fc08: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x30fc08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30fc0c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x30FC0Cu;
    {
        const bool branch_taken_0x30fc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fc0c) {
            ctx->pc = 0x30FB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fb38;
        }
    }
    ctx->pc = 0x30FC14u;
    // 0x30fc14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FC14u;
    {
        const bool branch_taken_0x30fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc14) {
            ctx->pc = 0x30FC34u;
            goto label_30fc34;
        }
    }
    ctx->pc = 0x30FC1Cu;
label_30fc1c:
    // 0x30fc1c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fc20: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fc24: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x30fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x30fc28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30fc2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fc30: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30fc34:
    // 0x30fc34: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x30fc34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fc38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30fc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30fc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30fc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fc44: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30fc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FC50u;
}
