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

// Function: srp_0c_init00
// Address: 0x3274e0 - 0x327754
void srp_0c_init00_0x3274e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0c_init00_0x3274e0");
#endif

    switch (ctx->pc) {
        case 0x327508u: goto label_327508;
        case 0x327528u: goto label_327528;
        case 0x327558u: goto label_327558;
        case 0x327574u: goto label_327574;
        case 0x3275a8u: goto label_3275a8;
        case 0x3276acu: goto label_3276ac;
        default: break;
    }

    ctx->pc = 0x3274e0u;

    // 0x3274e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3274e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3274e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3274e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3274e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3274ec: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3274ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3274f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3274f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3274f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3274f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3274f8: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x3274f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x3274fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3274fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327500: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x327500u;
    SET_GPR_U32(ctx, 31, 0x327508u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x327500u, 0x327508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327508u;
label_327508:
    // 0x327508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x327508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32750c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327514: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x327514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x327518: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x32751c: 0x244602f0  addiu       $a2, $v0, 0x2F0
    ctx->pc = 0x32751cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x327520: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x327520u;
    SET_GPR_U32(ctx, 31, 0x327528u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x327520u, 0x327528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327528u;
label_327528:
    // 0x327528: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x327528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32752c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32752cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327534: 0xe44002fc  swc1        $f0, 0x2FC($v0)
    ctx->pc = 0x327534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 764), bits); }
    // 0x327538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x327538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32753c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327540: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327544: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x327544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x327548: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x327548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x32754c: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x32754cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327550: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327550u;
    SET_GPR_U32(ctx, 31, 0x327558u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327550u, 0x327558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327558u;
label_327558:
    // 0x327558: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32755c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327560: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x327560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x327564: 0x244502f0  addiu       $a1, $v0, 0x2F0
    ctx->pc = 0x327564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x327568: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x327568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32756c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x32756Cu;
    SET_GPR_U32(ctx, 31, 0x327574u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x32756Cu, 0x327574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327574u;
label_327574:
    // 0x327574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327578: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x327578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x32757c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32757cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327580: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327584: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x327584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327588: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32758c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327590: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327594: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327598: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x327598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x32759c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32759cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3275a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3275A0u;
    {
        const bool branch_taken_0x3275a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3275a0) {
            ctx->pc = 0x3275E0u;
            goto label_3275e0;
        }
    }
    ctx->pc = 0x3275A8u;
label_3275a8:
    // 0x3275a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275ac: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x3275acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3275b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3275b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3275b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3275b8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3275b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3275bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3275c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3275c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3275c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3275c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3275c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3275cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3275d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3275d4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3275d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3275d8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3275d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3275dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3275dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3275e0:
    // 0x3275e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275e4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3275e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3275e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3275e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3275ec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3275ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3275f0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3275F0u;
    {
        const bool branch_taken_0x3275f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3275f0) {
            ctx->pc = 0x3275A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3275a8;
        }
    }
    ctx->pc = 0x3275F8u;
    // 0x3275f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275fc: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x3275fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327600: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x327600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x327604: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x327604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x327608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32760c: 0x0  nop
    ctx->pc = 0x32760cu;
    // NOP
    // 0x327610: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x327610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327614: 0x0  nop
    ctx->pc = 0x327614u;
    // NOP
    // 0x327618: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x327618u;
    {
        const bool branch_taken_0x327618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327618) {
            ctx->pc = 0x327694u;
            goto label_327694;
        }
    }
    ctx->pc = 0x327620u;
    // 0x327620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327624: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x327624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32762c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x32762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327630: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x327630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327638: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x32763c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32763Cu;
    {
        const bool branch_taken_0x32763c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32763c) {
            ctx->pc = 0x327658u;
            goto label_327658;
        }
    }
    ctx->pc = 0x327644u;
    // 0x327644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327648: 0x0  nop
    ctx->pc = 0x327648u;
    // NOP
    // 0x32764c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32764cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327650u;
    {
        const bool branch_taken_0x327650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327650) {
            ctx->pc = 0x327674u;
            goto label_327674;
        }
    }
    ctx->pc = 0x327658u;
label_327658:
    // 0x327658: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x327658u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x32765c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x327660: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x327660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x327664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327668: 0x0  nop
    ctx->pc = 0x327668u;
    // NOP
    // 0x32766c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32766cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327670: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x327670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_327674:
    // 0x327674: 0x0  nop
    ctx->pc = 0x327674u;
    // NOP
    // 0x327678: 0x0  nop
    ctx->pc = 0x327678u;
    // NOP
    // 0x32767c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32767cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x327680: 0x0  nop
    ctx->pc = 0x327680u;
    // NOP
    // 0x327684: 0x0  nop
    ctx->pc = 0x327684u;
    // NOP
    // 0x327688: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x327688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x32768c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32768Cu;
    {
        const bool branch_taken_0x32768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32768c) {
            ctx->pc = 0x3276A0u;
            goto label_3276a0;
        }
    }
    ctx->pc = 0x327694u;
label_327694:
    // 0x327694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x327694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327698: 0x0  nop
    ctx->pc = 0x327698u;
    // NOP
    // 0x32769c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3276a0:
    // 0x3276a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3276a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3276a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3276A4u;
    {
        const bool branch_taken_0x3276a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3276a4) {
            ctx->pc = 0x327710u;
            goto label_327710;
        }
    }
    ctx->pc = 0x3276ACu;
label_3276ac:
    // 0x3276ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3276b0: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x3276b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3276b4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3276B4u;
    {
        const bool branch_taken_0x3276b4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3276b4) {
            ctx->pc = 0x3276D0u;
            goto label_3276d0;
        }
    }
    ctx->pc = 0x3276BCu;
    // 0x3276bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3276bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3276c0: 0x0  nop
    ctx->pc = 0x3276c0u;
    // NOP
    // 0x3276c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3276c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3276c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3276C8u;
    {
        const bool branch_taken_0x3276c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3276c8) {
            ctx->pc = 0x3276ECu;
            goto label_3276ec;
        }
    }
    ctx->pc = 0x3276D0u;
label_3276d0:
    // 0x3276d0: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x3276d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3276d4: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3276d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3276d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3276d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3276dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3276dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3276e0: 0x0  nop
    ctx->pc = 0x3276e0u;
    // NOP
    // 0x3276e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3276e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3276e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3276e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3276ec:
    // 0x3276ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3276ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3276f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3276f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3276f4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3276f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3276f8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3276f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3276fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3276fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327704: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x327704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x327708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32770c: 0x0  nop
    ctx->pc = 0x32770cu;
    // NOP
label_327710:
    // 0x327710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327714: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327718: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32771c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327720: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x327720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x327724: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x327724u;
    {
        const bool branch_taken_0x327724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327724) {
            ctx->pc = 0x3276ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3276ac;
        }
    }
    ctx->pc = 0x32772Cu;
    // 0x32772c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x32772cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327730: 0x8ca40b18  lw          $a0, 0xB18($a1)
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x327734: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x327734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x327738: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x327738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32773c: 0xaca30b18  sw          $v1, 0xB18($a1)
    ctx->pc = 0x32773cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 3));
    // 0x327740: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x327740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327748: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x327748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32774c: 0x3e00008  jr          $ra
    ctx->pc = 0x32774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32774Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327754u;
}
