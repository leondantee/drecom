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

// Function: Homing2
// Address: 0x17bce0 - 0x17c66c
void Homing2_0x17bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Homing2_0x17bce0");
#endif

    switch (ctx->pc) {
        case 0x17bd84u: goto label_17bd84;
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf14u: goto label_17bf14;
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
        case 0x17c140u: goto label_17c140;
        case 0x17c168u: goto label_17c168;
        case 0x17c174u: goto label_17c174;
        case 0x17c1acu: goto label_17c1ac;
        case 0x17c1ccu: goto label_17c1cc;
        case 0x17c1e0u: goto label_17c1e0;
        case 0x17c264u: goto label_17c264;
        case 0x17c2b8u: goto label_17c2b8;
        case 0x17c2c4u: goto label_17c2c4;
        case 0x17c348u: goto label_17c348;
        case 0x17c35cu: goto label_17c35c;
        case 0x17c368u: goto label_17c368;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3dcu: goto label_17c3dc;
        case 0x17c3e8u: goto label_17c3e8;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c410u: goto label_17c410;
        case 0x17c498u: goto label_17c498;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4ccu: goto label_17c4cc;
        case 0x17c4f4u: goto label_17c4f4;
        case 0x17c528u: goto label_17c528;
        case 0x17c548u: goto label_17c548;
        case 0x17c55cu: goto label_17c55c;
        case 0x17c5d8u: goto label_17c5d8;
        case 0x17c61cu: goto label_17c61c;
        default: break;
    }

    ctx->pc = 0x17bce0u;

    // 0x17bce0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x17bce4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17bce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bcec: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x17bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x17bcf0: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x17bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x17bcf4: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x17bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x17bcf8: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x17bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
    // 0x17bcfc: 0x3c0548f4  lui         $a1, 0x48F4
    ctx->pc = 0x17bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18676 << 16));
    // 0x17bd00: 0x34a42400  ori         $a0, $a1, 0x2400
    ctx->pc = 0x17bd00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9216);
    // 0x17bd04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17bd04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bd08: 0x0  nop
    ctx->pc = 0x17bd08u;
    // NOP
    // 0x17bd0c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17bd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17bd10: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x17bd14: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x17bd14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17bd18: 0x1420024f  bnez        $at, . + 4 + (0x24F << 2)
    ctx->pc = 0x17BD18u;
    {
        const bool branch_taken_0x17bd18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bd18) {
            ctx->pc = 0x17C658u;
            goto label_17c658;
        }
    }
    ctx->pc = 0x17BD20u;
    // 0x17bd20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bd28: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17bd28u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17bd2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17bd30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17bd30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17bd34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17bd38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17bd3c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17bd40: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x17bd44: 0x24851380  addiu       $a1, $a0, 0x1380
    ctx->pc = 0x17bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x17bd48: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x17bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17bd4c: 0xa0c20153  sb          $v0, 0x153($a2)
    ctx->pc = 0x17bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 339), (uint8_t)GPR_U32(ctx, 2));
    // 0x17bd50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bd54: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17bd54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17bd58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17bd5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17bd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17bd60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17bd64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17bd68: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17bd6c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17bd70: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x17bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17bd74: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17bd78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17bd7c: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x17BD7Cu;
    SET_GPR_U32(ctx, 31, 0x17BD84u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x17BD7Cu, 0x17BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD84u;
label_17bd84:
    // 0x17bd84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bd88: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17bd8c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17bd90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17bd90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17bd94: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17bd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bd9c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17bda0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17bda4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17bda8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bdac: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x17bdb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x17bdb4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17BDB4u;
    {
        const bool branch_taken_0x17bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdb4) {
            ctx->pc = 0x17BE90u;
            goto label_17be90;
        }
    }
    ctx->pc = 0x17BDBCu;
    // 0x17bdbc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bdc0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17bdc4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17bdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17bdc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17bdc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17bdcc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17bdd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bdd4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17bdd8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17bddc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17bde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17bde4: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x17bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bde8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x17bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdec: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x17bdecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17bdf0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bdf4: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17bdf8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17bdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17bdfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17bdfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17be00: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17be00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17be04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be08: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17be08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17be0c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17be10: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17be14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be18: 0xc440018c  lwc1        $f0, 0x18C($v0)
    ctx->pc = 0x17be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17be1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17be20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17be24: 0xe420f0f0  swc1        $f0, -0xF10($at)
    ctx->pc = 0x17be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F0F0u, _value); } while (0); }
    // 0x17be28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17be2c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17be2cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17be30: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17be30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17be34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17be34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17be38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17be3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be40: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17be40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17be44: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17be44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17be48: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17be4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be50: 0xc441018c  lwc1        $f1, 0x18C($v0)
    ctx->pc = 0x17be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17be54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17be58: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17be58u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17be5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17be5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17be60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17be60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17be64: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17be64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17be68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be6c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17be70: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17be74: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17be78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17be7c: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x17be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17be80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17be84: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x17be84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x17be88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE88u;
    {
        const bool branch_taken_0x17be88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be88) {
            ctx->pc = 0x17BE9Cu;
            goto label_17be9c;
        }
    }
    ctx->pc = 0x17BE90u;
label_17be90:
    // 0x17be90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17be90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17be94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17be94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17be98: 0xe420f0f0  swc1        $f0, -0xF10($at)
    ctx->pc = 0x17be98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F0F0u, _value); } while (0); }
label_17be9c:
    // 0x17be9c: 0x3c024874  lui         $v0, 0x4874
    ctx->pc = 0x17be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18548 << 16));
    // 0x17bea0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x17bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x17bea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bea8: 0x0  nop
    ctx->pc = 0x17bea8u;
    // NOP
    // 0x17beac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17beacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17beb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17beb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17beb4: 0x0  nop
    ctx->pc = 0x17beb4u;
    // NOP
    // 0x17beb8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17bebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17bebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bec0: 0x0  nop
    ctx->pc = 0x17bec0u;
    // NOP
    // 0x17bec4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17bec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x17bec8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17becc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17beccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bed0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bed4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17bed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bee0: 0x0  nop
    ctx->pc = 0x17bee0u;
    // NOP
    // 0x17bee4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17bee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17bee8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17beec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bef0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x17bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bef4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17bef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17bef8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17BEF8u;
    SET_GPR_U32(ctx, 31, 0x17BF00u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17BF00u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17BF00u) { return; }
    ctx->pc = 0x17BF00u;
label_17bf00:
    // 0x17bf00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bf04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf08: 0x0  nop
    ctx->pc = 0x17bf08u;
    // NOP
    // 0x17bf0c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17bf10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17bf10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17bf14:
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
            goto label_17c10c;
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
            goto label_17c1e8;
        }
    }
    ctx->pc = 0x17C10Cu;
label_17c10c:
    // 0x17c10c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c110: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c114: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c118: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c11c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x17c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c120: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c124: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c124u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c128: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c12c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x17c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c130: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c134: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c138: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C138u;
    SET_GPR_U32(ctx, 31, 0x17C140u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C138u, 0x17C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C140u;
label_17c140:
    // 0x17c140: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c144: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c148: 0x0  nop
    ctx->pc = 0x17c148u;
    // NOP
    // 0x17c14c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x17C14Cu;
    {
        const bool branch_taken_0x17c14c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c14c) {
            ctx->pc = 0x17C1A0u;
            goto label_17c1a0;
        }
    }
    ctx->pc = 0x17C154u;
    // 0x17c154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c158: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c15c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c160: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C160u;
    SET_GPR_U32(ctx, 31, 0x17C168u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C168u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C168u) { return; }
    ctx->pc = 0x17C168u;
label_17c168:
    // 0x17c168: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c16c: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C16Cu;
    SET_GPR_U32(ctx, 31, 0x17C174u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C16Cu, 0x17C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C174u;
label_17c174:
    // 0x17c174: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c178: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c17c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c17cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c180: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c184: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c184u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c188: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c190: 0x0  nop
    ctx->pc = 0x17c190u;
    // NOP
    // 0x17c194: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c198: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17C198u;
    {
        const bool branch_taken_0x17c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c198) {
            ctx->pc = 0x17C1E8u;
            goto label_17c1e8;
        }
    }
    ctx->pc = 0x17C1A0u;
label_17c1a0:
    // 0x17c1a0: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c1a4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17C1A4u;
    SET_GPR_U32(ctx, 31, 0x17C1ACu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17C1A4u, 0x17C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1ACu;
label_17c1ac:
    // 0x17c1ac: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c1b4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c1b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c1c0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x17c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c1c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C1C4u;
    SET_GPR_U32(ctx, 31, 0x17C1CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C1CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C1CCu) { return; }
    ctx->pc = 0x17C1CCu;
label_17c1cc:
    // 0x17c1cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c1d8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C1D8u;
    SET_GPR_U32(ctx, 31, 0x17C1E0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C1E0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C1E0u) { return; }
    ctx->pc = 0x17C1E0u;
label_17c1e0:
    // 0x17c1e0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1e4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_17c1e8:
    // 0x17c1e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c1f0: 0x0  nop
    ctx->pc = 0x17c1f0u;
    // NOP
    // 0x17c1f4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x17c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17c1f8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1fc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c204: 0x0  nop
    ctx->pc = 0x17c204u;
    // NOP
    // 0x17c208: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x17C208u;
    {
        const bool branch_taken_0x17c208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c208) {
            ctx->pc = 0x17C238u;
            goto label_17c238;
        }
    }
    ctx->pc = 0x17C210u;
    // 0x17c210: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c214: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17c218: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c21c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c21cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c220: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x17c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c224: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c224u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c228: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c22c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c234: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_17c238:
    // 0x17c238: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c23c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c244: 0x0  nop
    ctx->pc = 0x17c244u;
    // NOP
    // 0x17c248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c24c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17c250: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c254: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c258: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c25c: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C25Cu;
    SET_GPR_U32(ctx, 31, 0x17C264u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C264u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C264u) { return; }
    ctx->pc = 0x17C264u;
label_17c264:
    // 0x17c264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c26c: 0x0  nop
    ctx->pc = 0x17c26cu;
    // NOP
    // 0x17c270: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c274: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c278: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c27c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c280: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c280u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c28c: 0x0  nop
    ctx->pc = 0x17c28cu;
    // NOP
    // 0x17c290: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17c290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17c294: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c298: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c29c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c2a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c2a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c2ac: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c2b0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C2B0u;
    SET_GPR_U32(ctx, 31, 0x17C2B8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C2B8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C2B8u) { return; }
    ctx->pc = 0x17C2B8u;
label_17c2b8:
    // 0x17c2b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c2bc: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C2BCu;
    SET_GPR_U32(ctx, 31, 0x17C2C4u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C2BCu, 0x17C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2C4u;
label_17c2c4:
    // 0x17c2c4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c2c8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x17c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c2cc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x17c2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c2d4: 0x0  nop
    ctx->pc = 0x17c2d4u;
    // NOP
    // 0x17c2d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c2dc: 0x0  nop
    ctx->pc = 0x17c2dcu;
    // NOP
    // 0x17c2e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C2E0u;
    {
        const bool branch_taken_0x17c2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c2e0) {
            ctx->pc = 0x17C2F0u;
            goto label_17c2f0;
        }
    }
    ctx->pc = 0x17C2E8u;
    // 0x17c2e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c2ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17c2ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17c2f0:
    // 0x17c2f0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c2f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c2f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x17c2fc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x17c2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c300: 0x1440ff04  bnez        $v0, . + 4 + (-0xFC << 2)
    ctx->pc = 0x17C300u;
    {
        const bool branch_taken_0x17c300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c300) {
            ctx->pc = 0x17BF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf14;
        }
    }
    ctx->pc = 0x17C308u;
    // 0x17c308: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c30c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c310: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c318: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c318u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c31c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c320: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c32c: 0x0  nop
    ctx->pc = 0x17c32cu;
    // NOP
    // 0x17c330: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17c330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17c334: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17c334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c338: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c33c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c340: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C340u;
    SET_GPR_U32(ctx, 31, 0x17C348u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C348u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C348u) { return; }
    ctx->pc = 0x17C348u;
label_17c348:
    // 0x17c348: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c34c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c350: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c354: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C354u;
    SET_GPR_U32(ctx, 31, 0x17C35Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C35Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C35Cu) { return; }
    ctx->pc = 0x17C35Cu;
label_17c35c:
    // 0x17c35c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c360: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C360u;
    SET_GPR_U32(ctx, 31, 0x17C368u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C360u, 0x17C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C368u;
label_17c368:
    // 0x17c368: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17c36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c374: 0x0  nop
    ctx->pc = 0x17c374u;
    // NOP
    // 0x17c378: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17c378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17c37c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c384: 0x0  nop
    ctx->pc = 0x17c384u;
    // NOP
    // 0x17c388: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c38c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c390: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c394: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C394u;
    SET_GPR_U32(ctx, 31, 0x17C39Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C39Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C39Cu) { return; }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3a4: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C3A4u;
    SET_GPR_U32(ctx, 31, 0x17C3ACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C3ACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C3ACu) { return; }
    ctx->pc = 0x17C3ACu;
label_17c3ac:
    // 0x17c3ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3b4: 0x0  nop
    ctx->pc = 0x17c3b4u;
    // NOP
    // 0x17c3b8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17c3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17c3bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3c4: 0x0  nop
    ctx->pc = 0x17c3c4u;
    // NOP
    // 0x17c3c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c3cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c3d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3d4: 0xc040c1a  jal         func_103068
    ctx->pc = 0x17C3D4u;
    SET_GPR_U32(ctx, 31, 0x17C3DCu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x17C3DCu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C3DCu) { return; }
    ctx->pc = 0x17C3DCu;
label_17c3dc:
    // 0x17c3dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17c3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x17c3e0: 0xc045566  jal         func_115598
    ctx->pc = 0x17C3E0u;
    SET_GPR_U32(ctx, 31, 0x17C3E8u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x17C3E0u, 0x17C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3E8u;
label_17c3e8:
    // 0x17c3e8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x17c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x17c3ec: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c3f0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17C3F0u;
    SET_GPR_U32(ctx, 31, 0x17C3F8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17C3F0u, 0x17C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F8u;
label_17c3f8:
    // 0x17c3f8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c400: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c404: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c408: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17C408u;
    SET_GPR_U32(ctx, 31, 0x17C410u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17C408u, 0x17C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C410u;
label_17c410:
    // 0x17c410: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c418: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x17c41c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c424: 0x0  nop
    ctx->pc = 0x17c424u;
    // NOP
    // 0x17c428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c42c: 0x0  nop
    ctx->pc = 0x17c42cu;
    // NOP
    // 0x17c430: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x17C430u;
    {
        const bool branch_taken_0x17c430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c430) {
            ctx->pc = 0x17C464u;
            goto label_17c464;
        }
    }
    ctx->pc = 0x17C438u;
    // 0x17c438: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c43c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c440: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c444: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c448: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c44c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c454: 0x0  nop
    ctx->pc = 0x17c454u;
    // NOP
    // 0x17c458: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c45c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17C45Cu;
    {
        const bool branch_taken_0x17c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c45c) {
            ctx->pc = 0x17C564u;
            goto label_17c564;
        }
    }
    ctx->pc = 0x17C464u;
label_17c464:
    // 0x17c464: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x17c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c468: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c46c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c46cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c470: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x17c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c474: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x17c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c47c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c480: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x17c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c484: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x17c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c48c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c48cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c490: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C490u;
    SET_GPR_U32(ctx, 31, 0x17C498u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C490u, 0x17C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C498u;
label_17c498:
    // 0x17c498: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c4a0: 0x0  nop
    ctx->pc = 0x17c4a0u;
    // NOP
    // 0x17c4a4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x17C4A4u;
    {
        const bool branch_taken_0x17c4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c4a4) {
            ctx->pc = 0x17C534u;
            goto label_17c534;
        }
    }
    ctx->pc = 0x17C4ACu;
    // 0x17c4ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c4b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c4b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C4B8u;
    SET_GPR_U32(ctx, 31, 0x17C4C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C4C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C4C0u) { return; }
    ctx->pc = 0x17C4C0u;
label_17c4c0:
    // 0x17c4c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c4c4: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C4C4u;
    SET_GPR_U32(ctx, 31, 0x17C4CCu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C4C4u, 0x17C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4CCu;
label_17c4cc:
    // 0x17c4cc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c4d0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c4d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c4d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c4dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c4e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c4e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c4e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c4ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C4ECu;
    SET_GPR_U32(ctx, 31, 0x17C4F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C4F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C4F4u) { return; }
    ctx->pc = 0x17C4F4u;
label_17c4f4:
    // 0x17c4f4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c4f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c4fc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c500: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x17c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c504: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c50c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c510: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c514: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c51c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c51cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c520: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C520u;
    SET_GPR_U32(ctx, 31, 0x17C528u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C520u, 0x17C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C528u;
label_17c528:
    // 0x17c528: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c52c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17C52Cu;
    {
        const bool branch_taken_0x17c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c52c) {
            ctx->pc = 0x17C564u;
            goto label_17c564;
        }
    }
    ctx->pc = 0x17C534u;
label_17c534:
    // 0x17c534: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c538: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c53c: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x17c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c540: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C540u;
    SET_GPR_U32(ctx, 31, 0x17C548u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C548u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C548u) { return; }
    ctx->pc = 0x17C548u;
label_17c548:
    // 0x17c548: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c54c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c550: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c554: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C554u;
    SET_GPR_U32(ctx, 31, 0x17C55Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C55Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C55Cu) { return; }
    ctx->pc = 0x17C55Cu;
label_17c55c:
    // 0x17c55c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c560: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_17c564:
    // 0x17c564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c56c: 0x0  nop
    ctx->pc = 0x17c56cu;
    // NOP
    // 0x17c570: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x17c570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17c574: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c578: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c57c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c580: 0x0  nop
    ctx->pc = 0x17c580u;
    // NOP
    // 0x17c584: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x17C584u;
    {
        const bool branch_taken_0x17c584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c584) {
            ctx->pc = 0x17C5C4u;
            goto label_17c5c4;
        }
    }
    ctx->pc = 0x17C58Cu;
    // 0x17c58c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c590: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17c594: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x17c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c598: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17c598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c59c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c5a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17c5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17c5a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c5ac: 0x0  nop
    ctx->pc = 0x17c5acu;
    // NOP
    // 0x17c5b0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x17c5b4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5b8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c5c0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_17c5c4:
    // 0x17c5c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c5c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c5cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c5d0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C5D0u;
    SET_GPR_U32(ctx, 31, 0x17C5D8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C5D8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C5D8u) { return; }
    ctx->pc = 0x17C5D8u;
label_17c5d8:
    // 0x17c5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c5e0: 0x0  nop
    ctx->pc = 0x17c5e0u;
    // NOP
    // 0x17c5e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c5e8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5ec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c5f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c5f4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x17c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5f8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c600: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c604: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c608: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c60c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c610: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c610u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c614: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C614u;
    SET_GPR_U32(ctx, 31, 0x17C61Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C614u, 0x17C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C61Cu;
label_17c61c:
    // 0x17c61c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c624: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17c628: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c62c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17c62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17c630: 0xc420f0f0  lwc1        $f0, -0xF10($at)
    ctx->pc = 0x17c630u;
    { uint32_t bits = FAST_READ32(0x47F0F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c638: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x17c638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x17c63c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c640: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17c640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c644: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x17c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17c648: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x17c648u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x17c64c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c650: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x17c654: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_17c658:
    // 0x17c658: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17c658u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c660: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17c664: 0x3e00008  jr          $ra
    ctx->pc = 0x17C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C66Cu;
}
