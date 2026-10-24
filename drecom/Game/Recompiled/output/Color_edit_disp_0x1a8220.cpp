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

// Function: Color_edit_disp
// Address: 0x1a8220 - 0x1a89b0
void Color_edit_disp_0x1a8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color_edit_disp_0x1a8220");
#endif

    switch (ctx->pc) {
        case 0x1a8274u: goto label_1a8274;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8774u: goto label_1a8774;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a88a8u: goto label_1a88a8;
        case 0x1a88e0u: goto label_1a88e0;
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8978u: goto label_1a8978;
        default: break;
    }

    ctx->pc = 0x1a8220u;

    // 0x1a8220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a8224: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1a8224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1a8228: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a8228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a822c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a8230: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a8234: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a8234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a8238: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a823c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a8240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a8244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a824c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1a824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1a8250: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1a8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a8254: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1a8254u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a8258: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a825c: 0x24540320  addiu       $s4, $v0, 0x320
    ctx->pc = 0x1a825cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a8260: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8264: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8268: 0x2685008c  addiu       $a1, $s4, 0x8C
    ctx->pc = 0x1a8268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
    // 0x1a826c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A826Cu;
    SET_GPR_U32(ctx, 31, 0x1A8274u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A826Cu, 0x1A8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8274u;
label_1a8274:
    // 0x1a8274: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8278: 0x24451614  addiu       $a1, $v0, 0x1614
    ctx->pc = 0x1a8278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a827c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1a827cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a8280: 0x268500a8  addiu       $a1, $s4, 0xA8
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x1a8284: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8284u;
    SET_GPR_U32(ctx, 31, 0x1A828Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8284u, 0x1A828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A828Cu;
label_1a828c:
    // 0x1a828c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a8290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8294: 0xac223c90  sw          $v0, 0x3C90($at)
    ctx->pc = 0x1a8294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3C90u, _value); } while (0);
    // 0x1a8298: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1a829c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x1a829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1a82a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a82a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a82a4: 0xac223c94  sw          $v0, 0x3C94($at)
    ctx->pc = 0x1a82a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3C94u, _value); } while (0);
    // 0x1a82a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a82a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a82ac: 0xac203c9c  sw          $zero, 0x3C9C($at)
    ctx->pc = 0x1a82acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3C9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3C9Cu, _value); } while (0);
    // 0x1a82b0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a82b4: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a82b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a82bc: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
    // 0x1a82c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a82c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA0u, _value); } while (0);
    // 0x1a82c4: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a82c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a82c8: 0x28b78  dsll        $s1, $v0, 13
    ctx->pc = 0x1a82c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 13);
    // 0x1a82cc: 0x1114be  dsrl32      $v0, $s1, 18
    ctx->pc = 0x1a82ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 18));
    // 0x1a82d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a82d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a82d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a82d8: 0x94243c78  lhu         $a0, 0x3C78($at)
    ctx->pc = 0x1a82d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D3C78u));
    // 0x1a82dc: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a82e0: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a82e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a82e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a82e8: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x1a82e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a82ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a82f0: 0xa4323c78  sh          $s2, 0x3C78($at)
    ctx->pc = 0x1a82f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D3C78u, _value); } while (0);
    // 0x1a82f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a82f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a82f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a82fc: 0xdc243c78  ld          $a0, 0x3C78($at)
    ctx->pc = 0x1a82fcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5D3C78u));
    // 0x1a8300: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a8304: 0x51bb8  dsll        $v1, $a1, 14
    ctx->pc = 0x1a8304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 14);
    // 0x1a8308: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1a830c: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x1a830cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1a8310: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x1a8310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a8314: 0xe34025  or          $t0, $a3, $v1
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a8318: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a831c: 0xfc283c78  sd          $t0, 0x3C78($at)
    ctx->pc = 0x1a831cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a8320: 0x9209002e  lbu         $t1, 0x2E($s0)
    ctx->pc = 0x1a8320u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a8324: 0x9167c  dsll32      $v0, $t1, 25
    ctx->pc = 0x1a8324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 25));
    // 0x1a8328: 0x2573e  dsrl32      $t2, $v0, 28
    ctx->pc = 0x1a8328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a832c: 0x3144000f  andi        $a0, $t2, 0xF
    ctx->pc = 0x1a832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x1a8330: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1a8330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a8334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8338: 0x942b3c7a  lhu         $t3, 0x3C7A($at)
    ctx->pc = 0x1a8338u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x5D3C7Au));
    // 0x1a833c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1a833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1a8340: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8344: 0x2404fc0f  addiu       $a0, $zero, -0x3F1
    ctx->pc = 0x1a8344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a8348: 0x1641824  and         $v1, $t3, $a0
    ctx->pc = 0x1a8348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1a834c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1a834cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8350: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8354: 0xa4253c7a  sh          $a1, 0x3C7A($at)
    ctx->pc = 0x1a8354u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D3C7Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D3C7Au, _value); } while (0);
    // 0x1a8358: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a8358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a835c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A835Cu;
    {
        const bool branch_taken_0x1a835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a835c) {
            ctx->pc = 0x1A8370u;
            goto label_1a8370;
        }
    }
    ctx->pc = 0x1A8364u;
    // 0x1a8364: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8368u;
    {
        const bool branch_taken_0x1a8368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8368) {
            ctx->pc = 0x1A8374u;
            goto label_1a8374;
        }
    }
    ctx->pc = 0x1A8370u;
label_1a8370:
    // 0x1a8370: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a8374:
    // 0x1a8374: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1a8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1a8378: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a837c: 0x90233c7b  lbu         $v1, 0x3C7B($at)
    ctx->pc = 0x1a837cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8380: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a8380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a8384: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8388: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1a8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a838c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a8390: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x1a8390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x1a8394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8398: 0xa0223c7b  sb          $v0, 0x3C7B($at)
    ctx->pc = 0x1a8398u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Bu, _value); } while (0);
    // 0x1a839c: 0x92040317  lbu         $a0, 0x317($s0)
    ctx->pc = 0x1a839cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a83a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A83A0u;
    {
        const bool branch_taken_0x1a83a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83a0) {
            ctx->pc = 0x1A83B4u;
            goto label_1a83b4;
        }
    }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1a83a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a83ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A83ACu;
    {
        const bool branch_taken_0x1a83ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83ac) {
            ctx->pc = 0x1A83B8u;
            goto label_1a83b8;
        }
    }
    ctx->pc = 0x1A83B4u;
label_1a83b4:
    // 0x1a83b4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a83b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a83b8:
    // 0x1a83b8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1a83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1a83bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a83bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a83c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83c4: 0xdc273c78  ld          $a3, 0x3C78($at)
    ctx->pc = 0x1a83c4u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x5D3C78u));
    // 0x1a83c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a83c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a83cc: 0x22fb8  dsll        $a1, $v0, 30
    ctx->pc = 0x1a83ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 30);
    // 0x1a83d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a83d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83d8: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
    // 0x1a83dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1a83e0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a83e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a83e4: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1a83e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a83e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a83ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83f0: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a83f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a83f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83f8: 0x90243c7c  lbu         $a0, 0x3C7C($at)
    ctx->pc = 0x1a83f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Cu));
    // 0x1a83fc: 0x30050001  andi        $a1, $zero, 0x1
    ctx->pc = 0x1a83fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a8400: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a8404: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a8408: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a8408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a840c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8414: 0xa0273c7c  sb          $a3, 0x3C7C($at)
    ctx->pc = 0x1a8414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D3C7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Cu, _value); } while (0);
    // 0x1a8418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a841c: 0x90283c7c  lbu         $t0, 0x3C7C($at)
    ctx->pc = 0x1a841cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5D3C7Cu));
    // 0x1a8420: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1a8420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a8424: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1a8424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1a8428: 0x240affe7  addiu       $t2, $zero, -0x19
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a842c: 0x10a1024  and         $v0, $t0, $t2
    ctx->pc = 0x1a842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x1a8430: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x1a8430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8438: 0xa02b3c7c  sb          $t3, 0x3C7C($at)
    ctx->pc = 0x1a8438u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x5D3C7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Cu, _value); } while (0);
    // 0x1a843c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8440: 0xdc243c78  ld          $a0, 0x3C78($at)
    ctx->pc = 0x1a8440u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5D3C78u));
    // 0x1a8444: 0x30063fff  andi        $a2, $zero, 0x3FFF
    ctx->pc = 0x1a8444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1a8448: 0x6117c  dsll32      $v0, $a2, 5
    ctx->pc = 0x1a8448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1a844c: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x1a8450: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x1a8450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x1a8454: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1a8454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8458: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1a8458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a845c: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1a845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1a8460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8464: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8468: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a8468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a846c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8470: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8474: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a8474u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a8478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a847c: 0x90243c7e  lbu         $a0, 0x3C7E($at)
    ctx->pc = 0x1a847cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Eu));
    // 0x1a8480: 0x3002000f  andi        $v0, $zero, 0xF
    ctx->pc = 0x1a8480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x1a8484: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a8484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8488: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x1a8488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x1a848c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a8490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8498: 0xa0223c7e  sb          $v0, 0x3C7E($at)
    ctx->pc = 0x1a8498u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Eu, _value); } while (0);
    // 0x1a849c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84a0: 0x90243c7e  lbu         $a0, 0x3C7E($at)
    ctx->pc = 0x1a84a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Eu));
    // 0x1a84a4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a84a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a84a8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a84ac: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a84b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a84b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84bc: 0xa0223c7e  sb          $v0, 0x3C7E($at)
    ctx->pc = 0x1a84bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Eu, _value); } while (0);
    // 0x1a84c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84c4: 0x90243c7f  lbu         $a0, 0x3C7F($at)
    ctx->pc = 0x1a84c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Fu));
    // 0x1a84c8: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1a84c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a84cc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1a84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a84d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a84d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84dc: 0xa0223c7f  sb          $v0, 0x3C7F($at)
    ctx->pc = 0x1a84dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Fu, _value); } while (0);
    // 0x1a84e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a84e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84e8: 0x90243c7f  lbu         $a0, 0x3C7F($at)
    ctx->pc = 0x1a84e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Fu));
    // 0x1a84ec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a84ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a84f0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a84f4: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a84f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8504: 0xa0223c7f  sb          $v0, 0x3C7F($at)
    ctx->pc = 0x1a8504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Fu, _value); } while (0);
    // 0x1a8508: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a850c: 0x90223c7b  lbu         $v0, 0x3C7B($at)
    ctx->pc = 0x1a850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8510: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a8510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a8514: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a851c: 0x62a804  sllv        $s5, $v0, $v1
    ctx->pc = 0x1a851cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a8520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8528: 0xdc223c78  ld          $v0, 0x3C78($at)
    ctx->pc = 0x1a8528u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5D3C78u));
    // 0x1a852c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a8530: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8534: 0x439804  sllv        $s3, $v1, $v0
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8538: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a8538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a853c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A853Cu;
    {
        const bool branch_taken_0x1a853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a853c) {
            ctx->pc = 0x1A8574u;
            goto label_1a8574;
        }
    }
    ctx->pc = 0x1A8544u;
    // 0x1a8544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8548: 0x24423ca4  addiu       $v0, $v0, 0x3CA4
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15524));
    // 0x1a854c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a854cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA4u, _value); } while (0);
    // 0x1a8550: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x1a8550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a8554: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1a8554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a8558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a855c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8560: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8564: 0x24423cb0  addiu       $v0, $v0, 0x3CB0
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15536));
    // 0x1a8568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB0u, _value); } while (0);
    // 0x1a856c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A856Cu;
    {
        const bool branch_taken_0x1a856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a856c) {
            ctx->pc = 0x1A86C0u;
            goto label_1a86c0;
        }
    }
    ctx->pc = 0x1A8574u;
label_1a8574:
    // 0x1a8574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8578: 0x90223c7b  lbu         $v0, 0x3C7B($at)
    ctx->pc = 0x1a8578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a857c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a8580: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a858c: 0x90243c7b  lbu         $a0, 0x3C7B($at)
    ctx->pc = 0x1a858cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8590: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a8594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8598: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1a8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a859c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a85a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a85a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85a8: 0xa0223c7b  sb          $v0, 0x3C7B($at)
    ctx->pc = 0x1a85a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Bu, _value); } while (0);
    // 0x1a85ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85b0: 0xdc223c78  ld          $v0, 0x3C78($at)
    ctx->pc = 0x1a85b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5D3C78u));
    // 0x1a85b4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a85b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a85b8: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a85bc: 0x64420003  daddiu      $v0, $v0, 0x3
    ctx->pc = 0x1a85bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)3);
    // 0x1a85c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85c4: 0xdc253c78  ld          $a1, 0x3C78($at)
    ctx->pc = 0x1a85c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5D3C78u));
    // 0x1a85c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a85c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a85cc: 0x227b8  dsll        $a0, $v0, 30
    ctx->pc = 0x1a85ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 30);
    // 0x1a85d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a85d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a85d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1a85dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a85dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a85e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a85e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a85e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a85e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a85ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85f0: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a85f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a85f4: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a85f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a85f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a85fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a85fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8604: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a8608: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8608u;
    {
        const bool branch_taken_0x1a8608 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a8608) {
            ctx->pc = 0x1A861Cu;
            goto label_1a861c;
        }
    }
    ctx->pc = 0x1A8610u;
    // 0x1a8610: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A861Cu;
            goto label_1a861c;
        }
    }
    ctx->pc = 0x1A8618u;
    // 0x1a8618: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a861c:
    // 0x1a861c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8620: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8624: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8628: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a862c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a862cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8634: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1a8634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a8638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a863c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8640: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8644: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a8644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8648: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a864c: 0x24423ca4  addiu       $v0, $v0, 0x3CA4
    ctx->pc = 0x1a864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15524));
    // 0x1a8650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA4u, _value); } while (0);
    // 0x1a8654: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8658: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a865c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a865cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8660: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8664: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a8668: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8668u;
    {
        const bool branch_taken_0x1a8668 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a8668) {
            ctx->pc = 0x1A867Cu;
            goto label_1a867c;
        }
    }
    ctx->pc = 0x1A8670u;
    // 0x1a8670: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8670u;
    {
        const bool branch_taken_0x1a8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8670) {
            ctx->pc = 0x1A867Cu;
            goto label_1a867c;
        }
    }
    ctx->pc = 0x1A8678u;
    // 0x1a8678: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a867c:
    // 0x1a867c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8680: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8688: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a8688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a868c: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a868cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8690: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8694: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a8694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a869c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1a869cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a86a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a86a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a86a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a86ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a86b0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a86b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86b8: 0x24423cb0  addiu       $v0, $v0, 0x3CB0
    ctx->pc = 0x1a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15536));
    // 0x1a86bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB0u, _value); } while (0);
label_1a86c0:
    // 0x1a86c0: 0x3c028110  lui         $v0, 0x8110
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33040 << 16));
    // 0x1a86c4: 0x34437d00  ori         $v1, $v0, 0x7D00
    ctx->pc = 0x1a86c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32000);
    // 0x1a86c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86cc: 0x24423ca8  addiu       $v0, $v0, 0x3CA8
    ctx->pc = 0x1a86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15528));
    // 0x1a86d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA8u, _value); } while (0);
    // 0x1a86d4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a86d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a86d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86dc: 0x24423cac  addiu       $v0, $v0, 0x3CAC
    ctx->pc = 0x1a86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15532));
    // 0x1a86e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CACu, _value); } while (0);
    // 0x1a86e4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a86e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a86ec: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a86f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a86f4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a86f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a86fc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1a86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a8700: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8704: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x1a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x1a8708: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a870c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8710: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8718: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a871c: 0x24423cb4  addiu       $v0, $v0, 0x3CB4
    ctx->pc = 0x1a871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15540));
    // 0x1a8720: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8720u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB4u, _value); } while (0);
    // 0x1a8724: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a8728: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a872c: 0x24543cb8  addiu       $s4, $v0, 0x3CB8
    ctx->pc = 0x1a872cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x1a8730: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1a8730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB8u, _value); } while (0);
    // 0x1a8734: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8738: 0x24443c60  addiu       $a0, $v0, 0x3C60
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15456));
    // 0x1a873c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8740: 0xac243c98  sw          $a0, 0x3C98($at)
    ctx->pc = 0x1a8740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D3C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3C98u, _value); } while (0);
    // 0x1a8744: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1a8748: 0x24a21614  addiu       $v0, $a1, 0x1614
    ctx->pc = 0x1a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5652));
    // 0x1a874c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a874cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8750: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8754: 0x24453c90  addiu       $a1, $v0, 0x3C90
    ctx->pc = 0x1a8754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x1a8758: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8758u;
    SET_GPR_U32(ctx, 31, 0x1A8760u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8758u, 0x1A8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8760u;
label_1a8760:
    // 0x1a8760: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a8760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8764: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a8768: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a8768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a876c: 0xc06a26c  jal         func_1A89B0
    ctx->pc = 0x1A876Cu;
    SET_GPR_U32(ctx, 31, 0x1A8774u);
    ctx->pc = 0x1A89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B0u, 0x1A876Cu, 0x1A8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8774u;
label_1a8774:
    // 0x1a8774: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a8774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a8778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8778u;
    {
        const bool branch_taken_0x1a8778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8778) {
            ctx->pc = 0x1A8790u;
            goto label_1a8790;
        }
    }
    ctx->pc = 0x1A8780u;
    // 0x1a8780: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a8780u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8784: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1a8784u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8788: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8788u;
    {
        const bool branch_taken_0x1a8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8788) {
            ctx->pc = 0x1A87DCu;
            goto label_1a87dc;
        }
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8794: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8798: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a8798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a879c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a87a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a87a4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A87A4u;
    {
        const bool branch_taken_0x1a87a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a87a4) {
            ctx->pc = 0x1A87B8u;
            goto label_1a87b8;
        }
    }
    ctx->pc = 0x1A87ACu;
    // 0x1a87ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A87ACu;
    {
        const bool branch_taken_0x1a87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87ac) {
            ctx->pc = 0x1A87B8u;
            goto label_1a87b8;
        }
    }
    ctx->pc = 0x1A87B4u;
    // 0x1a87b4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a87b8:
    // 0x1a87b8: 0x288c0  sll         $s1, $v0, 3
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a87bc: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a87c0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a87c4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a87c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a87c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a87cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a87d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a87d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a87d4: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x1a87d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a87d8: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a87dc:
    // 0x1a87dc: 0x96020128  lhu         $v0, 0x128($s0)
    ctx->pc = 0x1a87dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1a87e0: 0x30443fff  andi        $a0, $v0, 0x3FFF
    ctx->pc = 0x1a87e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a87e4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a87e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a87e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a87ec: 0x9603012a  lhu         $v1, 0x12A($s0)
    ctx->pc = 0x1a87ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a87f0: 0x315bc  dsll32      $v0, $v1, 22
    ctx->pc = 0x1a87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a87f4: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a87f8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a87fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1a87fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1a8800: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x1a8800u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1a8804: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1a8804u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1a8808: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x1a8808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1a880c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1a880cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1a8810: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8814: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x1a8814u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8818: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1a8818u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1a881c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1a8820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8824: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a8828: 0xc0403aa  jal         func_100EA8
    ctx->pc = 0x1A8828u;
    SET_GPR_U32(ctx, 31, 0x1A8830u);
    ctx->pc = 0x100EA8u;
    {
        ctx->pc = 0x1A8830u;
        ps2_stubs::sceGsSetDefStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8830u) { return; }
    ctx->pc = 0x1A8830u;
label_1a8830:
    // 0x1a8830: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8834: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1A8834u;
    SET_GPR_U32(ctx, 31, 0x1A883Cu);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1A883Cu;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A883Cu) { return; }
    ctx->pc = 0x1A883Cu;
label_1a883c:
    // 0x1a883c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1a8840: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a8844: 0x24653460  addiu       $a1, $v1, 0x3460
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 13408));
    // 0x1a8848: 0xc04045a  jal         func_101168
    ctx->pc = 0x1A8848u;
    SET_GPR_U32(ctx, 31, 0x1A8850u);
    ctx->pc = 0x101168u;
    {
        ctx->pc = 0x1A8850u;
        ps2_stubs::sceGsExecStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8850u) { return; }
    ctx->pc = 0x1A8850u;
label_1a8850:
    // 0x1a8850: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a8854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8858: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x1A8858u;
    SET_GPR_U32(ctx, 31, 0x1A8860u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x1A8860u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8860u) { return; }
    ctx->pc = 0x1A8860u;
label_1a8860:
    // 0x1a8860: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1a8860u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8864: 0x9616012a  lhu         $s6, 0x12A($s0)
    ctx->pc = 0x1a8864u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a8868: 0x1615bc  dsll32      $v0, $s6, 22
    ctx->pc = 0x1a8868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 22));
    // 0x1a886c: 0x21ebe  dsrl32      $v1, $v0, 26
    ctx->pc = 0x1a886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a8870: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A8870u;
    {
        const bool branch_taken_0x1a8870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8870) {
            ctx->pc = 0x1A88B0u;
            goto label_1a88b0;
        }
    }
    ctx->pc = 0x1A8878u;
    // 0x1a8878: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a887c: 0x245e3460  addiu       $fp, $v0, 0x3460
    ctx->pc = 0x1a887cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
    // 0x1a8880: 0x92020313  lbu         $v0, 0x313($s0)
    ctx->pc = 0x1a8880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 787)));
    // 0x1a8884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a8888: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a888c: 0x3c22021  addu        $a0, $fp, $v0
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1a8890: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8894: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1a8894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1a8898: 0x8fb700b8  lw          $s7, 0xB8($sp)
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a889c: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x1a889cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1a88a0: 0xc06a350  jal         func_1A8D40
    ctx->pc = 0x1A88A0u;
    SET_GPR_U32(ctx, 31, 0x1A88A8u);
    ctx->pc = 0x1A8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D40u, 0x1A88A0u, 0x1A88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88A8u;
label_1a88a8:
    // 0x1a88a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A88A8u;
    {
        const bool branch_taken_0x1a88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a88a8) {
            ctx->pc = 0x1A88E0u;
            goto label_1a88e0;
        }
    }
    ctx->pc = 0x1A88B0u;
label_1a88b0:
    // 0x1a88b0: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x1a88b4: 0x24e23460  addiu       $v0, $a3, 0x3460
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 13408));
    // 0x1a88b8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1a88bc: 0x92050313  lbu         $a1, 0x313($s0)
    ctx->pc = 0x1a88bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 787)));
    // 0x1a88c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a88c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a88c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a88c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1a88cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a88d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a88d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a88d4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a88d8: 0xc06a350  jal         func_1A8D40
    ctx->pc = 0x1A88D8u;
    SET_GPR_U32(ctx, 31, 0x1A88E0u);
    ctx->pc = 0x1A8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D40u, 0x1A88D8u, 0x1A88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88E0u;
label_1a88e0:
    // 0x1a88e0: 0x96020128  lhu         $v0, 0x128($s0)
    ctx->pc = 0x1a88e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1a88e4: 0x30443fff  andi        $a0, $v0, 0x3FFF
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a88e8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1a88e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a88ec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1a88ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1a88f0: 0x9603012a  lhu         $v1, 0x12A($s0)
    ctx->pc = 0x1a88f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x1a88f4: 0x315bc  dsll32      $v0, $v1, 22
    ctx->pc = 0x1a88f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a88f8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a88f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a88fc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1a88fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8900: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1a8900u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1a8904: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x1a8904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1a8908: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1a8908u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1a890c: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x1a890cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1a8910: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1a8910u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1a8914: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a8914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8918: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x1a8918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a891c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1a891cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1a8920: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a8924: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x1a8924u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8928: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1a8928u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1a892c: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x1a892cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1a8930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8934: 0xc040330  jal         func_100CC0
    ctx->pc = 0x1A8934u;
    SET_GPR_U32(ctx, 31, 0x1A893Cu);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x1A893Cu;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A893Cu) { return; }
    ctx->pc = 0x1A893Cu;
label_1a893c:
    // 0x1a893c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a893cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8940: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1A8940u;
    SET_GPR_U32(ctx, 31, 0x1A8948u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1A8948u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8948u) { return; }
    ctx->pc = 0x1A8948u;
label_1a8948:
    // 0x1a8948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a894c: 0x26030220  addiu       $v1, $s0, 0x220
    ctx->pc = 0x1a894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1a8950: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a8950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a8954: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1a8958: 0x24c53460  addiu       $a1, $a2, 0x3460
    ctx->pc = 0x1a8958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 13408));
    // 0x1a895c: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x1A895Cu;
    SET_GPR_U32(ctx, 31, 0x1A8964u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x1A8964u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8964u) { return; }
    ctx->pc = 0x1A8964u;
label_1a8964:
    // 0x1a8964: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8964u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a8968: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a8968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a896c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a896cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8970: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x1A8970u;
    SET_GPR_U32(ctx, 31, 0x1A8978u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x1A8978u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A8978u) { return; }
    ctx->pc = 0x1A8978u;
label_1a8978:
    // 0x1a8978: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a8978u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a897c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1a897cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8980: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a8980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a8984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a8988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a898c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a898cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a8990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a899c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a899cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a89a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a89a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a89a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89B0u;
}
