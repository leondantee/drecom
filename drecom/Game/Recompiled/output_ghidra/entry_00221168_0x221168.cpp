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

// Function: entry_00221168
// Address: 0x221168 - 0x2212a0
void entry_00221168_0x221168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221168_0x221168");
#endif

    switch (ctx->pc) {
        case 0x2211d8u: goto label_2211d8;
        case 0x2211e4u: goto label_2211e4;
        case 0x22121cu: goto label_22121c;
        case 0x221228u: goto label_221228;
        case 0x221250u: goto label_221250;
        default: break;
    }

    ctx->pc = 0x221168u;

label_221168:
    // 0x221168: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22116c:
    // 0x22116c: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x22116cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
label_221170:
    // 0x221170: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_221174:
    // 0x221174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221178:
    // 0x221178: 0x1462007f  bne         $v1, $v0, . + 4 + (0x7F << 2)
label_22117c:
    if (ctx->pc == 0x22117Cu) {
        ctx->pc = 0x221180u;
        goto label_221180;
    }
    ctx->pc = 0x221178u;
    {
        const bool branch_taken_0x221178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x221178) {
            ctx->pc = 0x221378u;
            return;
        }
    }
    ctx->pc = 0x221180u;
label_221180:
    // 0x221180: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x221180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221184:
    // 0x221184: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221188:
    // 0x221188: 0xa0c410a8  sb          $a0, 0x10A8($a2)
    ctx->pc = 0x221188u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4264), (uint8_t)GPR_U32(ctx, 4));
label_22118c:
    // 0x22118c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221190:
    // 0x221190: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x221190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221194:
    // 0x221194: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x221194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_221198:
    // 0x221198: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22119c:
    // 0x22119c: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x22119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2211a0:
    // 0x2211a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2211a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2211a4:
    // 0x2211a4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2211a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2211a8:
    // 0x2211a8: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x2211a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2211ac:
    // 0x2211ac: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2211acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2211b0:
    // 0x2211b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2211b4:
    // 0x2211b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2211b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2211b8:
    // 0x2211b8: 0x0  nop
    ctx->pc = 0x2211b8u;
    // NOP
label_2211bc:
    // 0x2211bc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2211bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2211c0:
    // 0x2211c0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x2211c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_2211c4:
    // 0x2211c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2211c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2211c8:
    // 0x2211c8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2211c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2211cc:
    // 0x2211cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2211ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2211d0:
    // 0x2211d0: 0xc062f5c  jal         func_18BD70
label_2211d4:
    if (ctx->pc == 0x2211D4u) {
        ctx->pc = 0x2211D8u;
        goto label_2211d8;
    }
    ctx->pc = 0x2211D0u;
    SET_GPR_U32(ctx, 31, 0x2211D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2211D0u, 0x2211D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211D8u;
label_2211d8:
    // 0x2211d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2211d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2211dc:
    // 0x2211dc: 0xc0630a8  jal         func_18C2A0
label_2211e0:
    if (ctx->pc == 0x2211E0u) {
        ctx->pc = 0x2211E4u;
        goto label_2211e4;
    }
    ctx->pc = 0x2211DCu;
    SET_GPR_U32(ctx, 31, 0x2211E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2211DCu, 0x2211E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2211E4u;
label_2211e4:
    // 0x2211e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2211e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2211e8:
    // 0x2211e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2211ec:
    // 0x2211ec: 0xc4811204  lwc1        $f1, 0x1204($a0)
    ctx->pc = 0x2211ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2211f0:
    // 0x2211f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2211f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2211f4:
    // 0x2211f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2211f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2211f8:
    // 0x2211f8: 0x0  nop
    ctx->pc = 0x2211f8u;
    // NOP
label_2211fc:
    // 0x2211fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2211fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_221200:
    // 0x221200: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x221200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_221204:
    // 0x221204: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_221208:
    // 0x221208: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22120c:
    // 0x22120c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x22120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_221210:
    // 0x221210: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221210u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221214:
    // 0x221214: 0xc062f5c  jal         func_18BD70
label_221218:
    if (ctx->pc == 0x221218u) {
        ctx->pc = 0x22121Cu;
        goto label_22121c;
    }
    ctx->pc = 0x221214u;
    SET_GPR_U32(ctx, 31, 0x22121Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x221214u, 0x22121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22121Cu;
label_22121c:
    // 0x22121c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22121cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221220:
    // 0x221220: 0xc0630a8  jal         func_18C2A0
label_221224:
    if (ctx->pc == 0x221224u) {
        ctx->pc = 0x221228u;
        goto label_221228;
    }
    ctx->pc = 0x221220u;
    SET_GPR_U32(ctx, 31, 0x221228u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x221220u, 0x221228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221228u;
label_221228:
    // 0x221228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22122c:
    // 0x22122c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221230:
    // 0x221230: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x221230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_221234:
    // 0x221234: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x221234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_221238:
    // 0x221238: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x221238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22123c:
    // 0x22123c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x22123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_221240:
    // 0x221240: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_221244:
    // 0x221244: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221244u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221248:
    // 0x221248: 0xc067b18  jal         func_19EC60
label_22124c:
    if (ctx->pc == 0x22124Cu) {
        ctx->pc = 0x221250u;
        goto label_221250;
    }
    ctx->pc = 0x221248u;
    SET_GPR_U32(ctx, 31, 0x221250u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221248u, 0x221250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221250u;
label_221250:
    // 0x221250: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221250u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_221254:
    // 0x221254: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221258:
    // 0x221258: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x221258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_22125c:
    // 0x22125c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221260:
    // 0x221260: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_221264:
    // 0x221264: 0xa48511f4  sh          $a1, 0x11F4($a0)
    ctx->pc = 0x221264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4596), (uint16_t)GPR_U32(ctx, 5));
label_221268:
    // 0x221268: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_22126c:
    // 0x22126c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x22126cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_221270:
    // 0x221270: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x221270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_221274:
    // 0x221274: 0x2065fff6  addi        $a1, $v1, -0xA
    ctx->pc = 0x221274u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_221278:
    // 0x221278: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x221278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_22127c:
    // 0x22127c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_221280:
    if (ctx->pc == 0x221280u) {
        ctx->pc = 0x221284u;
        goto label_221284;
    }
    ctx->pc = 0x22127Cu;
    {
        const bool branch_taken_0x22127c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22127c) {
            ctx->pc = 0x2212ACu;
            return;
        }
    }
    ctx->pc = 0x221284u;
label_221284:
    // 0x221284: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_221288:
    // 0x221288: 0x24641130  addiu       $a0, $v1, 0x1130
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4400));
label_22128c:
    // 0x22128c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_221290:
    // 0x221290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_221294:
    // 0x221294: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_221298:
    // 0x221298: 0x2200008  jr          $s1
label_22129c:
    if (ctx->pc == 0x22129Cu) {
        ctx->pc = 0x2212A0u;
        goto label_fallthrough_0x221298;
    }
    ctx->pc = 0x221298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x221298:
    ctx->pc = 0x2212A0u;
}
