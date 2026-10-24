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

// Function: Plw01_atk03_on
// Address: 0x1c0190 - 0x1c045c
void Plw01_atk03_on_0x1c0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk03_on_0x1c0190");
#endif

    switch (ctx->pc) {
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02ccu: goto label_1c02cc;
        case 0x1c02e4u: goto label_1c02e4;
        case 0x1c02f4u: goto label_1c02f4;
        case 0x1c0314u: goto label_1c0314;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0334u: goto label_1c0334;
        case 0x1c0340u: goto label_1c0340;
        case 0x1c0390u: goto label_1c0390;
        default: break;
    }

    ctx->pc = 0x1c0190u;

    // 0x1c0190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0194: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c0194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c0198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c019c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c019cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c01a0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c01a4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c01a8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c01ac: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c01acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c01b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c01b4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c01b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c01bc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c01bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c01c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c01c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c01c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01c8: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C01C8u;
    {
        const bool branch_taken_0x1c01c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c01c8) {
            ctx->pc = 0x1C0304u;
            goto label_1c0304;
        }
    }
    ctx->pc = 0x1C01D0u;
    // 0x1c01d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01d4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C01D4u;
    {
        const bool branch_taken_0x1c01d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c01d4) {
            ctx->pc = 0x1C0254u;
            goto label_1c0254;
        }
    }
    ctx->pc = 0x1C01DCu;
    // 0x1c01dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C01DCu;
    {
        const bool branch_taken_0x1c01dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01dc) {
            ctx->pc = 0x1C01ECu;
            goto label_1c01ec;
        }
    }
    ctx->pc = 0x1C01E4u;
    // 0x1c01e4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1C01E4u;
    {
        const bool branch_taken_0x1c01e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01e4) {
            ctx->pc = 0x1C0448u;
            goto label_1c0448;
        }
    }
    ctx->pc = 0x1C01ECu;
label_1c01ec:
    // 0x1c01ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c01f0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c01f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C01F4u;
    {
        const bool branch_taken_0x1c01f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c01f4) {
            ctx->pc = 0x1C0224u;
            goto label_1c0224;
        }
    }
    ctx->pc = 0x1C01FCu;
    // 0x1c01fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0200: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0204: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0208: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1c020c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0210: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0214: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C0214u;
    SET_GPR_U32(ctx, 31, 0x1C021Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C0214u, 0x1C021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C021Cu;
label_1c021c:
    // 0x1c021c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C021Cu;
    {
        const bool branch_taken_0x1c021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c021c) {
            ctx->pc = 0x1C0244u;
            goto label_1c0244;
        }
    }
    ctx->pc = 0x1C0224u;
label_1c0224:
    // 0x1c0224: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c022c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c022cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0230: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1c0230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1c0234: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0238: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c023c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C023Cu;
    SET_GPR_U32(ctx, 31, 0x1C0244u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C023Cu, 0x1C0244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0244u;
label_1c0244:
    // 0x1c0244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0248: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c024c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0250: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0254:
    // 0x1c0254: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0258: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c025c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C025Cu;
    {
        const bool branch_taken_0x1c025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c025c) {
            ctx->pc = 0x1C028Cu;
            goto label_1c028c;
        }
    }
    ctx->pc = 0x1C0264u;
    // 0x1c0264: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c026c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0270: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1c0274: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0278: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c027c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C027Cu;
    SET_GPR_U32(ctx, 31, 0x1C0284u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C027Cu, 0x1C0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0284u;
label_1c0284:
    // 0x1c0284: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0284u;
    {
        const bool branch_taken_0x1c0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0284) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C028Cu;
label_1c028c:
    // 0x1c028c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0294: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0298: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1c029c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c029cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c02a4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C02A4u;
    SET_GPR_U32(ctx, 31, 0x1C02ACu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C02A4u, 0x1C02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02ACu;
label_1c02ac:
    // 0x1c02ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c02b0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c02b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c02b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c02b8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c02bc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c02bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c02c0: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1c02c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c02c4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C02C4u;
    SET_GPR_U32(ctx, 31, 0x1C02CCu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C02C4u, 0x1C02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02CCu;
label_1c02cc:
    // 0x1c02cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c02d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c02d4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c02d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c02d8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c02d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c02dc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C02DCu;
    SET_GPR_U32(ctx, 31, 0x1C02E4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C02DCu, 0x1C02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02E4u;
label_1c02e4:
    // 0x1c02e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c02e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c02e8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c02e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c02ec: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C02ECu;
    SET_GPR_U32(ctx, 31, 0x1C02F4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C02ECu, 0x1C02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02F4u;
label_1c02f4:
    // 0x1c02f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c02f8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c02f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c02fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0300: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0304:
    // 0x1c0304: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c030c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C030Cu;
    SET_GPR_U32(ctx, 31, 0x1C0314u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C030Cu, 0x1C0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0314u;
label_1c0314:
    // 0x1c0314: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0318: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0318u;
    SET_GPR_U32(ctx, 31, 0x1C0320u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0318u, 0x1C0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0328: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c032c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C032Cu;
    SET_GPR_U32(ctx, 31, 0x1C0334u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C032Cu, 0x1C0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0334u;
label_1c0334:
    // 0x1c0334: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0338: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0338u;
    SET_GPR_U32(ctx, 31, 0x1C0340u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0338u, 0x1C0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0340u;
label_1c0340:
    // 0x1c0340: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0344: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c0344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c0348: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0348u;
    {
        const bool branch_taken_0x1c0348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0348) {
            ctx->pc = 0x1C037Cu;
            goto label_1c037c;
        }
    }
    ctx->pc = 0x1C0350u;
    // 0x1c0350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0354: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0358: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c035c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c0360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C037Cu;
            goto label_1c037c;
        }
    }
    ctx->pc = 0x1C0368u;
    // 0x1c0368: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c036c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0370: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0374: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c0374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0378: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c0378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c037c:
    // 0x1c037c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0380: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0384: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0388: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C0388u;
    SET_GPR_U32(ctx, 31, 0x1C0390u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C0388u, 0x1C0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0390u;
label_1c0390:
    // 0x1c0390: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03C4u;
            goto label_1c03c4;
        }
    }
    ctx->pc = 0x1C0398u;
    // 0x1c0398: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c039c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c03a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c03a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c03a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c03a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c03a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c03ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c03acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c03b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03b4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c03b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c03b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c03bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03c0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c03c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c03c4:
    // 0x1c03c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03c8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c03c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c03cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c03d0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c03d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c03d4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C03D4u;
    {
        const bool branch_taken_0x1c03d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03d4) {
            ctx->pc = 0x1C0448u;
            goto label_1c0448;
        }
    }
    ctx->pc = 0x1C03DCu;
    // 0x1c03dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03e0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c03e4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C03E4u;
    {
        const bool branch_taken_0x1c03e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03e4) {
            ctx->pc = 0x1C0448u;
            goto label_1c0448;
        }
    }
    ctx->pc = 0x1C03ECu;
    // 0x1c03ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c03f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c03f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c03fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C0448u;
            goto label_1c0448;
        }
    }
    ctx->pc = 0x1C0404u;
    // 0x1c0404: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0408: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c040c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c040cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0418: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c041c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0424: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c0424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c042c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c042cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0430: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0434: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0438: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c043c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0440: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0444: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c0448:
    // 0x1c0448: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c0448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c044c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0450: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0454: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C045Cu;
}
