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

// Function: Main_draw_ot
// Address: 0x166140 - 0x1662fc
void Main_draw_ot_0x166140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_draw_ot_0x166140");
#endif

    switch (ctx->pc) {
        case 0x166168u: goto label_166168;
        case 0x166170u: goto label_166170;
        case 0x166258u: goto label_166258;
        case 0x16627cu: goto label_16627c;
        case 0x166284u: goto label_166284;
        case 0x166290u: goto label_166290;
        case 0x166298u: goto label_166298;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662acu: goto label_1662ac;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662e0u: goto label_1662e0;
        default: break;
    }

    ctx->pc = 0x166140u;

    // 0x166140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166144: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x166144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x166148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16614c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166154: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166158: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x16615c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x16615cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166160: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x166160u;
    SET_GPR_U32(ctx, 31, 0x166168u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x166168u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166168u) { return; }
    ctx->pc = 0x166168u;
label_166168:
    // 0x166168: 0xc06b03c  jal         func_1AC0F0
    ctx->pc = 0x166168u;
    SET_GPR_U32(ctx, 31, 0x166170u);
    ctx->pc = 0x1AC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC0F0u, 0x166168u, 0x166170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166170u;
label_166170:
    // 0x166170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166174: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x166174u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x166178: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x166178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x16617c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x166180: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x166184: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x166184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166188: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x166188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16618c: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x16618cu;
    runtime->Store64(rdram, ctx, 0x70000020u, GPR_U64(ctx, 0));
    // 0x166190: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x166194: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166194u;
    runtime->Store64(rdram, ctx, 0x70000028u, GPR_U64(ctx, 2));
    // 0x166198: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x166198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16619c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x16619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1661a0: 0x3442080a  ori         $v0, $v0, 0x80A
    ctx->pc = 0x1661a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
    // 0x1661a4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1661a4u;
    runtime->Store64(rdram, ctx, 0x70000030u, GPR_U64(ctx, 2));
    // 0x1661a8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1661ac: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1661acu;
    runtime->Store64(rdram, ctx, 0x70000038u, GPR_U64(ctx, 2));
    // 0x1661b0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1661b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1661b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1661b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1661b8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1661b8u;
    runtime->Store64(rdram, ctx, 0x70000040u, GPR_U64(ctx, 2));
    // 0x1661bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1661c0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1661c0u;
    runtime->Store64(rdram, ctx, 0x70000048u, GPR_U64(ctx, 2));
    // 0x1661c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1661c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1661c8: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1661c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1661cc: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1661ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1661d0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1661d0u;
    runtime->Store64(rdram, ctx, 0x70000050u, GPR_U64(ctx, 2));
    // 0x1661d4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1661d8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1661d8u;
    runtime->Store64(rdram, ctx, 0x70000058u, GPR_U64(ctx, 2));
    // 0x1661dc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1661dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1661e0: 0x3c028fff  lui         $v0, 0x8FFF
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36863 << 16));
    // 0x1661e4: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x1661e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x1661e8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1661ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1661f0: 0x39102  srl         $s2, $v1, 4
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1661f4: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x1661f8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1661f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1661fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x166200: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x166200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166204: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x166208: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x166208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x16620c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x16620cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x166210: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x166210u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x166214: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x166214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166218: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x166218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x16621c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x16621cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x166220: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x166220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x166224: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x166228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x166228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16622c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x166230: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x166230u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x166234: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x166238: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x166238u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x16623c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16623cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166240: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x166244: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x166244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x166248: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x166248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16624c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16624cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166250: 0xc0409c6  jal         func_102718
    ctx->pc = 0x166250u;
    SET_GPR_U32(ctx, 31, 0x166258u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x166258u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166258u) { return; }
    ctx->pc = 0x166258u;
label_166258:
    // 0x166258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16625c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x166260: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x166264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x166268: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16626c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x16626cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x166270: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x166270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x166274: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x166274u;
    SET_GPR_U32(ctx, 31, 0x16627Cu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x16627Cu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16627Cu) { return; }
    ctx->pc = 0x16627Cu;
label_16627c:
    // 0x16627c: 0xc05952c  jal         func_1654B0
    ctx->pc = 0x16627Cu;
    SET_GPR_U32(ctx, 31, 0x166284u);
    ctx->pc = 0x1654B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1654B0u, 0x16627Cu, 0x166284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166284u;
label_166284:
    // 0x166284: 0x26241990  addiu       $a0, $s1, 0x1990
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6544));
    // 0x166288: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x166288u;
    SET_GPR_U32(ctx, 31, 0x166290u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x166288u, 0x166290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166290u;
label_166290:
    // 0x166290: 0xc059b28  jal         func_166CA0
    ctx->pc = 0x166290u;
    SET_GPR_U32(ctx, 31, 0x166298u);
    ctx->pc = 0x166CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166CA0u, 0x166290u, 0x166298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166298u;
label_166298:
    // 0x166298: 0x262419b8  addiu       $a0, $s1, 0x19B8
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6584));
    // 0x16629c: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x16629Cu;
    SET_GPR_U32(ctx, 31, 0x1662A4u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x16629Cu, 0x1662A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662A4u;
label_1662a4:
    // 0x1662a4: 0xc0591e0  jal         func_164780
    ctx->pc = 0x1662A4u;
    SET_GPR_U32(ctx, 31, 0x1662ACu);
    ctx->pc = 0x164780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164780u, 0x1662A4u, 0x1662ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1662b0: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1662b4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1662b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1662b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1662bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1662BCu;
    {
        const bool branch_taken_0x1662bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1662bc) {
            ctx->pc = 0x1662D8u;
            goto label_1662d8;
        }
    }
    ctx->pc = 0x1662C4u;
    // 0x1662c4: 0xc0a5e44  jal         func_297910
    ctx->pc = 0x1662C4u;
    SET_GPR_U32(ctx, 31, 0x1662CCu);
    ctx->pc = 0x297910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297910u, 0x1662C4u, 0x1662CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662CCu;
label_1662cc:
    // 0x1662cc: 0x262419b0  addiu       $a0, $s1, 0x19B0
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6576));
    // 0x1662d0: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x1662D0u;
    SET_GPR_U32(ctx, 31, 0x1662D8u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x1662D0u, 0x1662D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662D8u;
label_1662d8:
    // 0x1662d8: 0xc06b054  jal         func_1AC150
    ctx->pc = 0x1662D8u;
    SET_GPR_U32(ctx, 31, 0x1662E0u);
    ctx->pc = 0x1AC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC150u, 0x1662D8u, 0x1662E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662E0u;
label_1662e0:
    // 0x1662e0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1662e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1662e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1662e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1662e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1662e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1662ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1662ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1662f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1662f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1662F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1662F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1662FCu;
}
