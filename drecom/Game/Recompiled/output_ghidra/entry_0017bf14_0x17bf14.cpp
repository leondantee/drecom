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

// Function: entry_0017bf14
// Address: 0x17bf14 - 0x17c10c
void entry_0017bf14_0x17bf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf14_0x17bf14");
#endif

    switch (ctx->pc) {
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf58u: goto label_17bf58;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf88u: goto label_17bf88;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17bfe4u: goto label_17bfe4;
        case 0x17c008u: goto label_17c008;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c028u: goto label_17c028;
        case 0x17c05cu: goto label_17c05c;
        case 0x17c06cu: goto label_17c06c;
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0a8u: goto label_17c0a8;
        case 0x17c0b8u: goto label_17c0b8;
        default: break;
    }

    ctx->pc = 0x17bf14u;

    // 0x17bf14: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17bf18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17bf1c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17bf20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bf24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf28: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bf2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17bf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bf30: 0xc040c80  jal         func_103200
    ctx->pc = 0x17BF30u;
    SET_GPR_U32(ctx, 31, 0x17BF38u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17BF38u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF38u) { return; }
    ctx->pc = 0x17BF38u;
label_17bf38:
    // 0x17bf38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf40: 0x0  nop
    ctx->pc = 0x17bf40u;
    // NOP
    // 0x17bf44: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17bf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17bf48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf50: 0xc040c24  jal         func_103090
    ctx->pc = 0x17BF50u;
    SET_GPR_U32(ctx, 31, 0x17BF58u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17BF58u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF58u) { return; }
    ctx->pc = 0x17BF58u;
label_17bf58:
    // 0x17bf58: 0x3c02433b  lui         $v0, 0x433B
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17211 << 16));
    // 0x17bf5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x17bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x17bf60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bf64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf6c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17BF6Cu;
    SET_GPR_U32(ctx, 31, 0x17BF74u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17BF74u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF74u) { return; }
    ctx->pc = 0x17BF74u;
label_17bf74:
    // 0x17bf74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bf78: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bf7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x17bf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17bf80: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17BF80u;
    SET_GPR_U32(ctx, 31, 0x17BF88u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17BF88u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF88u) { return; }
    ctx->pc = 0x17BF88u;
label_17bf88:
    // 0x17bf88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf90: 0x0  nop
    ctx->pc = 0x17bf90u;
    // NOP
    // 0x17bf94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17bf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17bf98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bf9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bfa0: 0xc040c24  jal         func_103090
    ctx->pc = 0x17BFA0u;
    SET_GPR_U32(ctx, 31, 0x17BFA8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17BFA8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BFA8u) { return; }
    ctx->pc = 0x17BFA8u;
label_17bfa8:
    // 0x17bfa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bfac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bfb0: 0x0  nop
    ctx->pc = 0x17bfb0u;
    // NOP
    // 0x17bfb4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17bfb8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17bfbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bfc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bfc4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bfc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17BFC8u;
    SET_GPR_U32(ctx, 31, 0x17BFD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17BFD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BFD0u) { return; }
    ctx->pc = 0x17BFD0u;
label_17bfd0:
    // 0x17bfd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bfd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bfd8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17bfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bfdc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17BFDCu;
    SET_GPR_U32(ctx, 31, 0x17BFE4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17BFE4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BFE4u) { return; }
    ctx->pc = 0x17BFE4u;
label_17bfe4:
    // 0x17bfe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bfec: 0x0  nop
    ctx->pc = 0x17bfecu;
    // NOP
    // 0x17bff0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17bff4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17bff8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bffc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c000: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C000u;
    SET_GPR_U32(ctx, 31, 0x17C008u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C008u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C008u) { return; }
    ctx->pc = 0x17C008u;
label_17c008:
    // 0x17c008: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c00c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c010: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c014: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C014u;
    SET_GPR_U32(ctx, 31, 0x17C01Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C01Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C01Cu) { return; }
    ctx->pc = 0x17C01Cu;
label_17c01c:
    // 0x17c01c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c020: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C020u;
    SET_GPR_U32(ctx, 31, 0x17C028u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C020u, 0x17C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C028u;
label_17c028:
    // 0x17c028: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17c02c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c034: 0x0  nop
    ctx->pc = 0x17c034u;
    // NOP
    // 0x17c038: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17c038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17c03c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c044: 0x0  nop
    ctx->pc = 0x17c044u;
    // NOP
    // 0x17c048: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c04c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c050: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c054: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C054u;
    SET_GPR_U32(ctx, 31, 0x17C05Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C05Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C05Cu) { return; }
    ctx->pc = 0x17C05Cu;
label_17c05c:
    // 0x17c05c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c060: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c064: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C064u;
    SET_GPR_U32(ctx, 31, 0x17C06Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C06Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C06Cu) { return; }
    ctx->pc = 0x17C06Cu;
label_17c06c:
    // 0x17c06c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c074: 0x0  nop
    ctx->pc = 0x17c074u;
    // NOP
    // 0x17c078: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17c07c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c084: 0x0  nop
    ctx->pc = 0x17c084u;
    // NOP
    // 0x17c088: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c08c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c090: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c094: 0xc040c1a  jal         func_103068
    ctx->pc = 0x17C094u;
    SET_GPR_U32(ctx, 31, 0x17C09Cu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x17C09Cu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C09Cu) { return; }
    ctx->pc = 0x17C09Cu;
label_17c09c:
    // 0x17c09c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17c09cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x17c0a0: 0xc045566  jal         func_115598
    ctx->pc = 0x17C0A0u;
    SET_GPR_U32(ctx, 31, 0x17C0A8u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x17C0A0u, 0x17C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A8u;
label_17c0a8:
    // 0x17c0a8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x17c0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x17c0ac: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c0b0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17C0B0u;
    SET_GPR_U32(ctx, 31, 0x17C0B8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17C0B0u, 0x17C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0B8u;
label_17c0b8:
    // 0x17c0b8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c0bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c0c0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x17c0c4: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c0c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c0cc: 0x0  nop
    ctx->pc = 0x17c0ccu;
    // NOP
    // 0x17c0d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c0d4: 0x0  nop
    ctx->pc = 0x17c0d4u;
    // NOP
    // 0x17c0d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x17C0D8u;
    {
        const bool branch_taken_0x17c0d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c0d8) {
            ctx->pc = 0x17C10Cu;
            return;
        }
    }
    ctx->pc = 0x17C0E0u;
    // 0x17c0e0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c0e4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c0e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c0ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c0ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c0f0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c0f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c0f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c0fc: 0x0  nop
    ctx->pc = 0x17c0fcu;
    // NOP
    // 0x17c100: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c104: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17C104u;
    {
        const bool branch_taken_0x17c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c104) {
            ctx->pc = 0x17C1E8u;
            return;
        }
    }
    ctx->pc = 0x17C10Cu;
}
