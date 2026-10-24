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

// Function: entry_0030f888
// Address: 0x30f888 - 0x30fa14
void entry_0030f888_0x30f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f888_0x30f888");
#endif

    switch (ctx->pc) {
        case 0x30f93cu: goto label_30f93c;
        default: break;
    }

    ctx->pc = 0x30f888u;

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
            return;
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
            return;
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
    ctx->pc = 0x30fa14u;
}
