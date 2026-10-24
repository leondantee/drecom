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

// Function: Plw02_atk00_atk
// Address: 0x1c21f0 - 0x1c2418
void Plw02_atk00_atk_0x1c21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk00_atk_0x1c21f0");
#endif

    switch (ctx->pc) {
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2268u: goto label_1c2268;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c23a8u: goto label_1c23a8;
        default: break;
    }

    ctx->pc = 0x1c21f0u;

    // 0x1c21f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c21f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c21f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c21fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c2200: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c2200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c2204: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c2204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c2208: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c220c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c220cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2210: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c2210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2218: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2218u;
    {
        const bool branch_taken_0x1c2218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2218) {
            ctx->pc = 0x1C2284u;
            goto label_1c2284;
        }
    }
    ctx->pc = 0x1C2220u;
    // 0x1c2220: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2220u;
    {
        const bool branch_taken_0x1c2220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2220) {
            ctx->pc = 0x1C2230u;
            goto label_1c2230;
        }
    }
    ctx->pc = 0x1C2228u;
    // 0x1c2228: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1C2228u;
    {
        const bool branch_taken_0x1c2228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2228) {
            ctx->pc = 0x1C2404u;
            goto label_1c2404;
        }
    }
    ctx->pc = 0x1C2230u;
label_1c2230:
    // 0x1c2230: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2238: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c223c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2240: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2244: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2248: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2248u;
    SET_GPR_U32(ctx, 31, 0x1C2250u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2248u, 0x1C2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2250u;
label_1c2250:
    // 0x1c2250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2254: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2258: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c225c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c2260: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C2260u;
    SET_GPR_U32(ctx, 31, 0x1C2268u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C2260u, 0x1C2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2268u;
label_1c2268:
    // 0x1c2268: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1c2268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c226c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2270: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c2270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c2274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c227c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2284:
    // 0x1c2284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2288: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c2288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c228c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2290: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2294: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2294u;
    {
        const bool branch_taken_0x1c2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2294) {
            ctx->pc = 0x1C22B4u;
            goto label_1c22b4;
        }
    }
    ctx->pc = 0x1C229Cu;
    // 0x1c229c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c22a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c22a4: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c22a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c22a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c22ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c22acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c22b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c22b4:
    // 0x1c22b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c22b8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c22b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c22bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c22c0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c22c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c22c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C22C4u;
    {
        const bool branch_taken_0x1c22c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22c4) {
            ctx->pc = 0x1C22E0u;
            goto label_1c22e0;
        }
    }
    ctx->pc = 0x1C22CCu;
    // 0x1c22cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c22ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c22d0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c22d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c22d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c22d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c22dc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c22dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c22e0:
    // 0x1c22e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c22e4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c22e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c22e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c22e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c22ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c22ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c22f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C22F0u;
    {
        const bool branch_taken_0x1c22f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22f0) {
            ctx->pc = 0x1C2310u;
            goto label_1c2310;
        }
    }
    ctx->pc = 0x1C22F8u;
    // 0x1c22f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c22f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c22fc: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c2300: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2304: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2308: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c2308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c230c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c230cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c2310:
    // 0x1c2310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2314: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c231c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c2320: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2324: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2324u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2328: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2328u;
    SET_GPR_U32(ctx, 31, 0x1C2330u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2328u, 0x1C2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2330u;
label_1c2330:
    // 0x1c2330: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2334: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2334u;
    SET_GPR_U32(ctx, 31, 0x1C233Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2334u, 0x1C233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C233Cu;
label_1c233c:
    // 0x1c233c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c233cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2340: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2344: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2348: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2348u;
    SET_GPR_U32(ctx, 31, 0x1C2350u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2348u, 0x1C2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2350u;
label_1c2350:
    // 0x1c2350: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c2350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2354: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2354u;
    SET_GPR_U32(ctx, 31, 0x1C235Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2354u, 0x1C235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C235Cu;
label_1c235c:
    // 0x1c235c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2360: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1c2360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1c2364: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2368: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c2368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c236c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C236Cu;
    {
        const bool branch_taken_0x1c236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c236c) {
            ctx->pc = 0x1C23B0u;
            goto label_1c23b0;
        }
    }
    ctx->pc = 0x1C2374u;
    // 0x1c2374: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2378: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c237c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C237Cu;
    {
        const bool branch_taken_0x1c237c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c237c) {
            ctx->pc = 0x1C23B0u;
            goto label_1c23b0;
        }
    }
    ctx->pc = 0x1C2384u;
    // 0x1c2384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2388: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c238c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2390: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2394: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2394u;
    {
        const bool branch_taken_0x1c2394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2394) {
            ctx->pc = 0x1C23B0u;
            goto label_1c23b0;
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23a0: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C23A0u;
    SET_GPR_U32(ctx, 31, 0x1C23A8u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C23A0u, 0x1C23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A8u;
label_1c23a8:
    // 0x1c23a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C23A8u;
    {
        const bool branch_taken_0x1c23a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23a8) {
            ctx->pc = 0x1C2404u;
            goto label_1c2404;
        }
    }
    ctx->pc = 0x1C23B0u;
label_1c23b0:
    // 0x1c23b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c23b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c23b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C23B8u;
    {
        const bool branch_taken_0x1c23b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23b8) {
            ctx->pc = 0x1C2404u;
            goto label_1c2404;
        }
    }
    ctx->pc = 0x1C23C0u;
    // 0x1c23c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23c8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c23c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c23cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23d0: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c23d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c23d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c23d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C23D8u;
    {
        const bool branch_taken_0x1c23d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c23d8) {
            ctx->pc = 0x1C23F0u;
            goto label_1c23f0;
        }
    }
    ctx->pc = 0x1C23E0u;
    // 0x1c23e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c23e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c23e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C23E8u;
    {
        const bool branch_taken_0x1c23e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23e8) {
            ctx->pc = 0x1C23FCu;
            goto label_1c23fc;
        }
    }
    ctx->pc = 0x1C23F0u;
label_1c23f0:
    // 0x1c23f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c23f8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c23f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c23fc:
    // 0x1c23fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C23FCu;
    {
        const bool branch_taken_0x1c23fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23fc) {
            ctx->pc = 0x1C2404u;
            goto label_1c2404;
        }
    }
    ctx->pc = 0x1C2404u;
label_1c2404:
    // 0x1c2404: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c2404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c240c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c2410: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2418u;
}
