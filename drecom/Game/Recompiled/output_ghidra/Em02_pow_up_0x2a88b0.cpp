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

// Function: Em02_pow_up
// Address: 0x2a88b0 - 0x2a8d48
void Em02_pow_up_0x2a88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_pow_up_0x2a88b0");
#endif

    switch (ctx->pc) {
        case 0x2a89f8u: goto label_2a89f8;
        case 0x2a8a50u: goto label_2a8a50;
        case 0x2a8a5cu: goto label_2a8a5c;
        case 0x2a8aa4u: goto label_2a8aa4;
        case 0x2a8ab0u: goto label_2a8ab0;
        default: break;
    }

    ctx->pc = 0x2a88b0u;

    // 0x2a88b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a88b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2a88b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2a88b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a88bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a88bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a88c0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2a88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2a88c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a88c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a88cc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a88d0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2a88d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a88d4: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x2A88D4u;
    {
        const bool branch_taken_0x2a88d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a88d4) {
            ctx->pc = 0x2A8D30u;
            goto label_2a8d30;
        }
    }
    ctx->pc = 0x2A88DCu;
    // 0x2a88dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a88e0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a88e4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a88e8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2a88e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2a88ec: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a88f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a88f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a88f8: 0x90630052  lbu         $v1, 0x52($v1)
    ctx->pc = 0x2a88f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x2a88fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a88fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a8900: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8904: 0x108300e6  beq         $a0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2A8904u;
    {
        const bool branch_taken_0x2a8904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8904) {
            ctx->pc = 0x2A8CA0u;
            goto label_2a8ca0;
        }
    }
    ctx->pc = 0x2A890Cu;
    // 0x2a890c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8910: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A8910u;
    {
        const bool branch_taken_0x2a8910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8910) {
            ctx->pc = 0x2A8AB0u;
            goto label_2a8ab0;
        }
    }
    ctx->pc = 0x2A8918u;
    // 0x2a8918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8918u;
    {
        const bool branch_taken_0x2a8918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8918) {
            ctx->pc = 0x2A8928u;
            goto label_2a8928;
        }
    }
    ctx->pc = 0x2A8920u;
    // 0x2a8920: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2A8920u;
    {
        const bool branch_taken_0x2a8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8920) {
            ctx->pc = 0x2A8D30u;
            goto label_2a8d30;
        }
    }
    ctx->pc = 0x2A8928u;
label_2a8928:
    // 0x2a8928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a892c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a8930: 0x245112c0  addiu       $s1, $v0, 0x12C0
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2a8934: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2a8934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8938: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2a8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a893c: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2a893cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8948: 0x0  nop
    ctx->pc = 0x2a8948u;
    // NOP
    // 0x2a894c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8958: 0x0  nop
    ctx->pc = 0x2a8958u;
    // NOP
    // 0x2a895c: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2a895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2a8960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8968: 0x0  nop
    ctx->pc = 0x2a8968u;
    // NOP
    // 0x2a896c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a896cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8970: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8974: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a8978: 0x24511450  addiu       $s1, $v0, 0x1450
    ctx->pc = 0x2a8978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x2a897c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2a897cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8980: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2a8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a8984: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2a8984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a8988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a898c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8990: 0x0  nop
    ctx->pc = 0x2a8990u;
    // NOP
    // 0x2a8994: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a899c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a899cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89a0: 0x0  nop
    ctx->pc = 0x2a89a0u;
    // NOP
    // 0x2a89a4: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2a89a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2a89a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a89ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89b0: 0x0  nop
    ctx->pc = 0x2a89b0u;
    // NOP
    // 0x2a89b4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a89b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a89b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a89bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a89c4: 0xa0430052  sb          $v1, 0x52($v0)
    ctx->pc = 0x2a89c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a89c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89cc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a89d0: 0x24500ab0  addiu       $s0, $v0, 0xAB0
    ctx->pc = 0x2a89d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x2a89d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a89d8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a89d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a89dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a89e0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a89e4: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x2a89e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2a89e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a89ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a89f0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A89F0u;
    SET_GPR_U32(ctx, 31, 0x2A89F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A89F0u, 0x2A89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89F8u;
label_2a89f8:
    // 0x2a89f8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a89fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a89fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a00: 0x0  nop
    ctx->pc = 0x2a8a00u;
    // NOP
    // 0x2a8a04: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a8a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a8a08: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a8a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a10: 0x0  nop
    ctx->pc = 0x2a8a10u;
    // NOP
    // 0x2a8a14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a8a18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8a1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a8a20: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a8a24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8a28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8a2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8a30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a8a38: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a8a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8a3c: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a8a40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8a44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a8a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8a48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A8A48u;
    SET_GPR_U32(ctx, 31, 0x2A8A50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A8A48u, 0x2A8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A50u;
label_2a8a50:
    // 0x2a8a50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8a50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8a54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A8A54u;
    SET_GPR_U32(ctx, 31, 0x2A8A5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A8A54u, 0x2A8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A5Cu;
label_2a8a5c:
    // 0x2a8a5c: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x2a8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x2a8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8a64: 0x0  nop
    ctx->pc = 0x2a8a64u;
    // NOP
    // 0x2a8a68: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a8a6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2a8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8a70: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a8a74: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a8a78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8a7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a8a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8a80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8a84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8a88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a8a8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a8a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8a90: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a8a94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8a98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a8a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8a9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A8A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8AA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A8A9Cu, 0x2A8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AA4u;
label_2a8aa4:
    // 0x2a8aa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8aa8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A8AA8u;
    SET_GPR_U32(ctx, 31, 0x2A8AB0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A8AA8u, 0x2A8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AB0u;
label_2a8ab0:
    // 0x2a8ab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ab4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8ab8: 0x24700240  addiu       $s0, $v1, 0x240
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x2a8abc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8ac0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ac4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8AC4u;
    {
        const bool branch_taken_0x2a8ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8ac4) {
            ctx->pc = 0x2A8B08u;
            goto label_2a8b08;
        }
    }
    ctx->pc = 0x2A8ACCu;
    // 0x2a8acc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8ad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8ad4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8ad8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8adc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8ae0: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ae8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8aec: 0x247002d0  addiu       $s0, $v1, 0x2D0
    ctx->pc = 0x2a8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x2a8af0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8af8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8afc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8b04: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2a8b08:
    // 0x2a8b08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8b0c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8b10: 0x247112c0  addiu       $s1, $v1, 0x12C0
    ctx->pc = 0x2a8b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2a8b14: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b18: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2a8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2a8b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b20: 0x0  nop
    ctx->pc = 0x2a8b20u;
    // NOP
    // 0x2a8b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a8b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8b28: 0x0  nop
    ctx->pc = 0x2a8b28u;
    // NOP
    // 0x2a8b2c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8B2Cu;
    {
        const bool branch_taken_0x2a8b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8b2c) {
            ctx->pc = 0x2A8BB8u;
            goto label_2a8bb8;
        }
    }
    ctx->pc = 0x2A8B34u;
    // 0x2a8b34: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b38: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b3c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b44: 0x0  nop
    ctx->pc = 0x2a8b44u;
    // NOP
    // 0x2a8b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b4c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8b50: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x2a8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b54: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b60: 0x0  nop
    ctx->pc = 0x2a8b60u;
    // NOP
    // 0x2a8b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b68: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a8b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8b70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8b74: 0x24711450  addiu       $s1, $v1, 0x1450
    ctx->pc = 0x2a8b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5200));
    // 0x2a8b78: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b7c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b80: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b88: 0x0  nop
    ctx->pc = 0x2a8b88u;
    // NOP
    // 0x2a8b8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b90: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8b94: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x2a8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b98: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b9c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ba4: 0x0  nop
    ctx->pc = 0x2a8ba4u;
    // NOP
    // 0x2a8ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8bac: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8BB0u;
    {
        const bool branch_taken_0x2a8bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8bb0) {
            ctx->pc = 0x2A8BC8u;
            goto label_2a8bc8;
        }
    }
    ctx->pc = 0x2A8BB8u;
label_2a8bb8:
    // 0x2a8bb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8bc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8bc4: 0xa0640052  sb          $a0, 0x52($v1)
    ctx->pc = 0x2a8bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 82), (uint8_t)GPR_U32(ctx, 4));
label_2a8bc8:
    // 0x2a8bc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8bcc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8bd0: 0x24700360  addiu       $s0, $v1, 0x360
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x2a8bd4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2a8bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8bd8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8bdc: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A8BDCu;
    {
        const bool branch_taken_0x2a8bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a8bdc) {
            ctx->pc = 0x2A8D30u;
            goto label_2a8d30;
        }
    }
    ctx->pc = 0x2A8BE4u;
    // 0x2a8be4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8be8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8bec: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8bf0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8bf4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8bf8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8bfc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c04: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c0c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c10: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x2a8c14: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c18: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c1c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c20: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c28: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c2c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c34: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c3c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c40: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x2a8c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x2a8c44: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c48: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c4c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c50: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c54: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c58: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c5c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c60: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c64: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8c6c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a8c70: 0x247006c0  addiu       $s0, $v1, 0x6C0
    ctx->pc = 0x2a8c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x2a8c74: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a8c78: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c7c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2a8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2a8c80: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a8c84: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c88: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2a8c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2a8c8c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a8c90: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a8c94: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2a8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2a8c98: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A8C98u;
    {
        const bool branch_taken_0x2a8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c98) {
            ctx->pc = 0x2A8D30u;
            goto label_2a8d30;
        }
    }
    ctx->pc = 0x2A8CA0u;
label_2a8ca0:
    // 0x2a8ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ca4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8ca8: 0x247115e0  addiu       $s1, $v1, 0x15E0
    ctx->pc = 0x2a8ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2a8cac: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cb0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8cb4: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cbc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cc0: 0x24711770  addiu       $s1, $v1, 0x1770
    ctx->pc = 0x2a8cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x2a8cc4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cc8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8ccc: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cd4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cd8: 0x24711db0  addiu       $s1, $v1, 0x1DB0
    ctx->pc = 0x2a8cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7600));
    // 0x2a8cdc: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8ce0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8ce4: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cec: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cf0: 0x24712580  addiu       $s1, $v1, 0x2580
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2a8cf4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cf8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8cfc: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8d04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8d08: 0x24712bc0  addiu       $s1, $v1, 0x2BC0
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x2a8d0c: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8d10: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8d14: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8d14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8d1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a8d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8d20: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2a8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a8d24: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a8d28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a8d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a8d2c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2a8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2a8d30:
    // 0x2a8d30: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2a8d30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8d3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a8d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8d40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D48u;
}
