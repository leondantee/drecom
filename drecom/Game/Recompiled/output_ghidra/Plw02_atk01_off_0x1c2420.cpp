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

// Function: Plw02_atk01_off
// Address: 0x1c2420 - 0x1c2684
void Plw02_atk01_off_0x1c2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk01_off_0x1c2420");
#endif

    switch (ctx->pc) {
        case 0x1c24acu: goto label_1c24ac;
        case 0x1c24d4u: goto label_1c24d4;
        case 0x1c2514u: goto label_1c2514;
        case 0x1c253cu: goto label_1c253c;
        case 0x1c255cu: goto label_1c255c;
        case 0x1c256cu: goto label_1c256c;
        case 0x1c258cu: goto label_1c258c;
        case 0x1c2598u: goto label_1c2598;
        case 0x1c25acu: goto label_1c25ac;
        case 0x1c25b8u: goto label_1c25b8;
        case 0x1c25ccu: goto label_1c25cc;
        default: break;
    }

    ctx->pc = 0x1c2420u;

    // 0x1c2420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2424: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c2428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c242c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c242cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c2430: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c2430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c2434: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c2438: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c2438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c243c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c243cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c2440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2444: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c2444u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c2448: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c244c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c244cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2450: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c2450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2458: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C2458u;
    {
        const bool branch_taken_0x1c2458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2458) {
            ctx->pc = 0x1C257Cu;
            goto label_1c257c;
        }
    }
    ctx->pc = 0x1C2460u;
    // 0x1c2460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2464: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2464u;
    {
        const bool branch_taken_0x1c2464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2464) {
            ctx->pc = 0x1C24E4u;
            goto label_1c24e4;
        }
    }
    ctx->pc = 0x1C246Cu;
    // 0x1c246c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C246Cu;
    {
        const bool branch_taken_0x1c246c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c246c) {
            ctx->pc = 0x1C247Cu;
            goto label_1c247c;
        }
    }
    ctx->pc = 0x1C2474u;
    // 0x1c2474: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C2474u;
    {
        const bool branch_taken_0x1c2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2474) {
            ctx->pc = 0x1C2670u;
            goto label_1c2670;
        }
    }
    ctx->pc = 0x1C247Cu;
label_1c247c:
    // 0x1c247c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2480: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c2484: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2484u;
    {
        const bool branch_taken_0x1c2484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2484) {
            ctx->pc = 0x1C24B4u;
            goto label_1c24b4;
        }
    }
    ctx->pc = 0x1C248Cu;
    // 0x1c248c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2490: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2494: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2498: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c2498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c249c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c24a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c24a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C24A4u;
    SET_GPR_U32(ctx, 31, 0x1C24ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C24A4u, 0x1C24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24ACu;
label_1c24ac:
    // 0x1c24ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C24ACu;
    {
        const bool branch_taken_0x1c24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24ac) {
            ctx->pc = 0x1C24D4u;
            goto label_1c24d4;
        }
    }
    ctx->pc = 0x1C24B4u;
label_1c24b4:
    // 0x1c24b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c24b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c24bc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c24c0: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c24c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c24c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c24c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c24cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C24CCu;
    SET_GPR_U32(ctx, 31, 0x1C24D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C24CCu, 0x1C24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D4u;
label_1c24d4:
    // 0x1c24d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c24d8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c24d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c24dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c24e0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c24e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c24e4:
    // 0x1c24e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c24e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c24e8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c24ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C24ECu;
    {
        const bool branch_taken_0x1c24ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24ec) {
            ctx->pc = 0x1C251Cu;
            goto label_1c251c;
        }
    }
    ctx->pc = 0x1C24F4u;
    // 0x1c24f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c24f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c24fc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2500: 0x24061409  addiu       $a2, $zero, 0x1409
    ctx->pc = 0x1c2500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x1c2504: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2508: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c250c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C250Cu;
    SET_GPR_U32(ctx, 31, 0x1C2514u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C250Cu, 0x1C2514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2514u;
label_1c2514:
    // 0x1c2514: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2514u;
    {
        const bool branch_taken_0x1c2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2514) {
            ctx->pc = 0x1C253Cu;
            goto label_1c253c;
        }
    }
    ctx->pc = 0x1C251Cu;
label_1c251c:
    // 0x1c251c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2520: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2524: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2528: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x1c2528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x1c252c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c252cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2530: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2534: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C2534u;
    SET_GPR_U32(ctx, 31, 0x1C253Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C2534u, 0x1C253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C253Cu;
label_1c253c:
    // 0x1c253c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2540: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c2540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c2544: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c254c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2550: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c2550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2554: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2554u;
    SET_GPR_U32(ctx, 31, 0x1C255Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2554u, 0x1C255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C255Cu;
label_1c255c:
    // 0x1c255c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2560: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c2560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2564: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C2564u;
    SET_GPR_U32(ctx, 31, 0x1C256Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C2564u, 0x1C256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C256Cu;
label_1c256c:
    // 0x1c256c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2570: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2578: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c257c:
    // 0x1c257c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2580: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2584: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2584u;
    SET_GPR_U32(ctx, 31, 0x1C258Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2584u, 0x1C258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C258Cu;
label_1c258c:
    // 0x1c258c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2590: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2590u;
    SET_GPR_U32(ctx, 31, 0x1C2598u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2590u, 0x1C2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c259c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c25a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c25a4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C25A4u;
    SET_GPR_U32(ctx, 31, 0x1C25ACu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C25A4u, 0x1C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25b0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25c0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c25c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c25c4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C25C4u;
    SET_GPR_U32(ctx, 31, 0x1C25CCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C25C4u, 0x1C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25CCu;
label_1c25cc:
    // 0x1c25cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C25CCu;
    {
        const bool branch_taken_0x1c25cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25cc) {
            ctx->pc = 0x1C2658u;
            goto label_1c2658;
        }
    }
    ctx->pc = 0x1C25D4u;
    // 0x1c25d4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c25d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c25dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C25DCu;
    {
        const bool branch_taken_0x1c25dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25dc) {
            ctx->pc = 0x1C2628u;
            goto label_1c2628;
        }
    }
    ctx->pc = 0x1C25E4u;
    // 0x1c25e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c25e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c25ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c25f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c25f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c25f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C25F4u;
    {
        const bool branch_taken_0x1c25f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25f4) {
            ctx->pc = 0x1C2628u;
            goto label_1c2628;
        }
    }
    ctx->pc = 0x1C25FCu;
    // 0x1c25fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2600: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2604: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2608: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c2608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c260c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c260cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c2610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2614: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2618: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c261c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2624: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c2628:
    // 0x1c2628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c262c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c2630: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2630u;
    {
        const bool branch_taken_0x1c2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2630) {
            ctx->pc = 0x1C2670u;
            goto label_1c2670;
        }
    }
    ctx->pc = 0x1C2638u;
    // 0x1c2638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c263c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2640: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c264c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c264cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2650u;
    {
        const bool branch_taken_0x1c2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2650) {
            ctx->pc = 0x1C2670u;
            goto label_1c2670;
        }
    }
    ctx->pc = 0x1C2658u;
label_1c2658:
    // 0x1c2658: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c265c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2660: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2664: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2668: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c266c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c266cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c2670:
    // 0x1c2670: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c2670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2678: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c2678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c267c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2684u;
}
