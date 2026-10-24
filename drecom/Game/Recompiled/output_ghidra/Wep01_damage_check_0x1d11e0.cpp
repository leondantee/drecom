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

// Function: Wep01_damage_check
// Address: 0x1d11e0 - 0x1d1964
void Wep01_damage_check_0x1d11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep01_damage_check_0x1d11e0");
#endif

    switch (ctx->pc) {
        case 0x1d1260u: goto label_1d1260;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1318u: goto label_1d1318;
        case 0x1d1380u: goto label_1d1380;
        case 0x1d1390u: goto label_1d1390;
        case 0x1d1434u: goto label_1d1434;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d18d0u: goto label_1d18d0;
        case 0x1d18e0u: goto label_1d18e0;
        default: break;
    }

    ctx->pc = 0x1d11e0u;

    // 0x1d11e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d11e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d11e4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d11e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d11e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d11e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d11ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d11ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d11f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d11f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d11f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d11f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d11f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d11fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d120c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1d120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1d1210: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d1214: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1d1214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1d1218: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1d1218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1d121c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1220: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1d1220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1d1224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1224u;
    {
        const bool branch_taken_0x1d1224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1224) {
            ctx->pc = 0x1D1240u;
            goto label_1d1240;
        }
    }
    ctx->pc = 0x1D122Cu;
    // 0x1d122c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1230: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d1234: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1d1234u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d1238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1238u;
    {
        const bool branch_taken_0x1d1238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1238) {
            ctx->pc = 0x1D1244u;
            goto label_1d1244;
        }
    }
    ctx->pc = 0x1D1240u;
label_1d1240:
    // 0x1d1240: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1d1240u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d1244:
    // 0x1d1244: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1248: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d1248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d124c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1250: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d1254: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1d1254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d1258: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D1258u;
    SET_GPR_U32(ctx, 31, 0x1D1260u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D1258u, 0x1D1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1260u;
label_1d1260:
    // 0x1d1260: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1264: 0xc067588  jal         func_19D620
    ctx->pc = 0x1D1264u;
    SET_GPR_U32(ctx, 31, 0x1D126Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1D1264u, 0x1D126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D126Cu;
label_1d126c:
    // 0x1d126c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d1270: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1274: 0x3c03476a  lui         $v1, 0x476A
    ctx->pc = 0x1d1274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18282 << 16));
    // 0x1d1278: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1d1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1d127c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d127cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1280: 0x0  nop
    ctx->pc = 0x1d1280u;
    // NOP
    // 0x1d1284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d1284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1288: 0x0  nop
    ctx->pc = 0x1d1288u;
    // NOP
    // 0x1d128c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1D128Cu;
    {
        const bool branch_taken_0x1d128c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d128c) {
            ctx->pc = 0x1D12C8u;
            goto label_1d12c8;
        }
    }
    ctx->pc = 0x1D1294u;
    // 0x1d1294: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1298: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x1d1298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d129c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D129Cu;
    {
        const bool branch_taken_0x1d129c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d129c) {
            ctx->pc = 0x1D12C0u;
            goto label_1d12c0;
        }
    }
    ctx->pc = 0x1D12A4u;
    // 0x1d12a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d12a8: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d12ac: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d12acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d12b0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d12b4: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d12b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12bc: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1d12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_1d12c0:
    // 0x1d12c0: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x1D12C0u;
    {
        const bool branch_taken_0x1d12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d12c0) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D12C8u;
label_1d12c8:
    // 0x1d12c8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12cc: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1d12d0: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1d12d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d12d4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d12d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d12d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d12d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d12dc: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1d12dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d12e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d12e4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d12e8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d12ec: 0x24838a80  addiu       $v1, $a0, -0x7580
    ctx->pc = 0x1d12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937216));
    // 0x1d12f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d12f4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x1d12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x1d12f8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d12fc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1d12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d1300: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d1304: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d1304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1308: 0xc46c0050  lwc1        $f12, 0x50($v1)
    ctx->pc = 0x1d1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d130c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1310: 0xc06c6e8  jal         func_1B1BA0
    ctx->pc = 0x1D1310u;
    SET_GPR_U32(ctx, 31, 0x1D1318u);
    ctx->pc = 0x1B1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1BA0u, 0x1D1310u, 0x1D1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1318u;
label_1d1318:
    // 0x1d1318: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1d1318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x1d131c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1320: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d1324: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D1324u;
    {
        const bool branch_taken_0x1d1324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1324) {
            ctx->pc = 0x1D1460u;
            goto label_1d1460;
        }
    }
    ctx->pc = 0x1D132Cu;
    // 0x1d132c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D132Cu;
    {
        const bool branch_taken_0x1d132c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d132c) {
            ctx->pc = 0x1D133Cu;
            goto label_1d133c;
        }
    }
    ctx->pc = 0x1D1334u;
    // 0x1d1334: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1D1334u;
    {
        const bool branch_taken_0x1d1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1334) {
            ctx->pc = 0x1D1544u;
            goto label_1d1544;
        }
    }
    ctx->pc = 0x1D133Cu;
label_1d133c:
    // 0x1d133c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d1340: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x1d1340u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1d1344: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d1344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d1348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d134c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D134Cu;
    {
        const bool branch_taken_0x1d134c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d134c) {
            ctx->pc = 0x1D1368u;
            goto label_1d1368;
        }
    }
    ctx->pc = 0x1D1354u;
    // 0x1d1354: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1358: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d1358u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d135c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1360: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d1364: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d1364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d1368:
    // 0x1d1368: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1368u;
    {
        const bool branch_taken_0x1d1368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1368) {
            ctx->pc = 0x1D1390u;
            goto label_1d1390;
        }
    }
    ctx->pc = 0x1D1370u;
    // 0x1d1370: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1d1374: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d1378: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1378u;
    SET_GPR_U32(ctx, 31, 0x1D1380u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1380u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1380u) { return; }
    ctx->pc = 0x1D1380u;
label_1d1380:
    // 0x1d1380: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x1d1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1d1384: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d1384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1388: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1388u;
    SET_GPR_U32(ctx, 31, 0x1D1390u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1390u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1390u) { return; }
    ctx->pc = 0x1D1390u;
label_1d1390:
    // 0x1d1390: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1394: 0x90630060  lbu         $v1, 0x60($v1)
    ctx->pc = 0x1d1394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d1398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d139c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d13a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D13A0u;
    {
        const bool branch_taken_0x1d13a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13a0) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D13A8u;
    // 0x1d13a8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d13a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d13ac: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x1d13acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1d13b0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1d13b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1d13b4: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x1d13b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d13b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d13bc: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x1d13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1d13c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d13c4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D13C4u;
    {
        const bool branch_taken_0x1d13c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13c4) {
            ctx->pc = 0x1D13D4u;
            goto label_1d13d4;
        }
    }
    ctx->pc = 0x1D13CCu;
    // 0x1d13cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D13CCu;
    {
        const bool branch_taken_0x1d13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d13cc) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D13D4u;
label_1d13d4:
    // 0x1d13d4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d13d8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1d13d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1d13dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d13dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d13e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d13e4: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D13E4u;
    {
        const bool branch_taken_0x1d13e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13e4) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D13ECu;
    // 0x1d13ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d13f0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D13F0u;
    {
        const bool branch_taken_0x1d13f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d13f0) {
            ctx->pc = 0x1D1458u;
            goto label_1d1458;
        }
    }
    ctx->pc = 0x1D13F8u;
    // 0x1d13f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d13fc: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D13FCu;
    {
        const bool branch_taken_0x1d13fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d13fc) {
            ctx->pc = 0x1D1414u;
            goto label_1d1414;
        }
    }
    ctx->pc = 0x1D1404u;
    // 0x1d1404: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1404u;
    {
        const bool branch_taken_0x1d1404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1404) {
            ctx->pc = 0x1D1414u;
            goto label_1d1414;
        }
    }
    ctx->pc = 0x1D140Cu;
    // 0x1d140c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D140Cu;
    {
        const bool branch_taken_0x1d140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d140c) {
            ctx->pc = 0x1D1414u;
            goto label_1d1414;
        }
    }
    ctx->pc = 0x1D1414u;
label_1d1414:
    // 0x1d1414: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1d1418: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x1d1418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d141c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1420: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d1420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d1424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1428: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d1428u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d142c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1D142Cu;
    SET_GPR_U32(ctx, 31, 0x1D1434u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1D142Cu, 0x1D1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1434u;
label_1d1434:
    // 0x1d1434: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1438: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1d1438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1d143c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1440: 0x8c530064  lw          $s3, 0x64($v0)
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d1444: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1448: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x1d1448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1d144c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d1450: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D1450u;
    SET_GPR_U32(ctx, 31, 0x1D1458u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D1458u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D1458u) { return; }
    ctx->pc = 0x1D1458u;
label_1d1458:
    // 0x1d1458: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1D1458u;
    {
        const bool branch_taken_0x1d1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1458) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D1460u;
label_1d1460:
    // 0x1d1460: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1464: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x1d1464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1468: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x1d1468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d146c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1470: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1470u;
    {
        const bool branch_taken_0x1d1470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1470) {
            ctx->pc = 0x1D14F4u;
            goto label_1d14f4;
        }
    }
    ctx->pc = 0x1D1478u;
    // 0x1d1478: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d147c: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1d147cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1d1480: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d1480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1488: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1488u;
    {
        const bool branch_taken_0x1d1488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1488) {
            ctx->pc = 0x1D14D4u;
            goto label_1d14d4;
        }
    }
    ctx->pc = 0x1D1490u;
    // 0x1d1490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1494: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D14D4u;
            goto label_1d14d4;
        }
    }
    ctx->pc = 0x1D149Cu;
    // 0x1d149c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d14a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D14A0u;
    {
        const bool branch_taken_0x1d14a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d14a0) {
            ctx->pc = 0x1D14B8u;
            goto label_1d14b8;
        }
    }
    ctx->pc = 0x1D14A8u;
    // 0x1d14a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D14A8u;
    {
        const bool branch_taken_0x1d14a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14a8) {
            ctx->pc = 0x1D14B8u;
            goto label_1d14b8;
        }
    }
    ctx->pc = 0x1D14B0u;
    // 0x1d14b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D14B0u;
    {
        const bool branch_taken_0x1d14b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14b0) {
            ctx->pc = 0x1D1518u;
            goto label_1d1518;
        }
    }
    ctx->pc = 0x1D14B8u;
label_1d14b8:
    // 0x1d14b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d14b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d14c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d14c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14c4: 0xc0bd488  jal         func_2F5220
    ctx->pc = 0x1D14C4u;
    SET_GPR_U32(ctx, 31, 0x1D14CCu);
    ctx->pc = 0x2F5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5220u, 0x1D14C4u, 0x1D14CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14CCu;
label_1d14cc:
    // 0x1d14cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D1518u;
            goto label_1d1518;
        }
    }
    ctx->pc = 0x1D14D4u;
label_1d14d4:
    // 0x1d14d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d14d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d14d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14dc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d14dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d14e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d14e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14e4: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x1D14E4u;
    SET_GPR_U32(ctx, 31, 0x1D14ECu);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x1D14E4u, 0x1D14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ECu;
label_1d14ec:
    // 0x1d14ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D14ECu;
    {
        const bool branch_taken_0x1d14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14ec) {
            ctx->pc = 0x1D1518u;
            goto label_1d1518;
        }
    }
    ctx->pc = 0x1D14F4u;
label_1d14f4:
    // 0x1d14f4: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x1d14f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d14f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d14fc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d14fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d1500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1504: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1D1504u;
    SET_GPR_U32(ctx, 31, 0x1D150Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1D1504u, 0x1D150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D150Cu;
label_1d150c:
    // 0x1d150c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d150cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d1510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1D1510u;
    SET_GPR_U32(ctx, 31, 0x1D1518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1D1510u, 0x1D1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1518u;
label_1d1518:
    // 0x1d1518: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1518u;
    {
        const bool branch_taken_0x1d1518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1518) {
            ctx->pc = 0x1D153Cu;
            goto label_1d153c;
        }
    }
    ctx->pc = 0x1D1520u;
    // 0x1d1520: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1524: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d1524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d1528: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d1528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d152c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d152cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d1530: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d1530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d1534: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1538: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1d1538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_1d153c:
    // 0x1d153c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1D153Cu;
    {
        const bool branch_taken_0x1d153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d153c) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D1544u;
label_1d1544:
    // 0x1d1544: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1548: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x1d1548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d154c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1550: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1554: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x1d1554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x1d1558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d155c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d1560: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1560u;
    {
        const bool branch_taken_0x1d1560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1560) {
            ctx->pc = 0x1D1578u;
            goto label_1d1578;
        }
    }
    ctx->pc = 0x1D1568u;
    // 0x1d1568: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d156c: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x1d156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x1d1570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1574: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x1d1574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_1d1578:
    // 0x1d1578: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1d1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1d157c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1D157Cu;
    {
        const bool branch_taken_0x1d157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d157c) {
            ctx->pc = 0x1D18F8u;
            goto label_1d18f8;
        }
    }
    ctx->pc = 0x1D1584u;
label_1d1584:
    // 0x1d1584: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1588: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d158c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d1590: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1d1594: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1d1594u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1598: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x1d1598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15a0: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d15a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d15a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d15a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d15ac: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d15b0: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d15b4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D15B4u;
    SET_GPR_U32(ctx, 31, 0x1D15BCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D15B4u, 0x1D15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15BCu;
label_1d15bc:
    // 0x1d15bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d15c0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1D15C0u;
    SET_GPR_U32(ctx, 31, 0x1D15C8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1D15C0u, 0x1D15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15C8u;
label_1d15c8:
    // 0x1d15c8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d15cc: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1d15ccu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d15d0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d15d4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1d15d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d15d8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d15dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d15dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d15e0: 0x0  nop
    ctx->pc = 0x1d15e0u;
    // NOP
    // 0x1d15e4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1D15E4u;
    {
        const bool branch_taken_0x1d15e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d15e4) {
            ctx->pc = 0x1D1618u;
            goto label_1d1618;
        }
    }
    ctx->pc = 0x1D15ECu;
    // 0x1d15ec: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d15f0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1d15f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d15f4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d15f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d15f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d15fc: 0x0  nop
    ctx->pc = 0x1d15fcu;
    // NOP
    // 0x1d1600: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1600u;
    {
        const bool branch_taken_0x1d1600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1600) {
            ctx->pc = 0x1D1614u;
            goto label_1d1614;
        }
    }
    ctx->pc = 0x1D1608u;
    // 0x1d1608: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1d1608u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d160c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D160Cu;
    {
        const bool branch_taken_0x1d160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d160c) {
            ctx->pc = 0x1D1618u;
            goto label_1d1618;
        }
    }
    ctx->pc = 0x1D1614u;
label_1d1614:
    // 0x1d1614: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d1614u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1618:
    // 0x1d1618: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1d1618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1620: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d1624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1624u;
    {
        const bool branch_taken_0x1d1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1624) {
            ctx->pc = 0x1D1648u;
            goto label_1d1648;
        }
    }
    ctx->pc = 0x1D162Cu;
    // 0x1d162c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1d1630: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d1630u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1634: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d1634u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d1638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d163c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d163cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1640: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1D1640u;
    {
        const bool branch_taken_0x1d1640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1640) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D1648u;
label_1d1648:
    // 0x1d1648: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1d1648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1d164c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1650: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d1654: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d1658: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x1d165c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1660: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1668: 0x13c20023  beq         $fp, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D1668u;
    {
        const bool branch_taken_0x1d1668 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1668) {
            ctx->pc = 0x1D16F8u;
            goto label_1d16f8;
        }
    }
    ctx->pc = 0x1D1670u;
    // 0x1d1670: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D1680u;
            goto label_1d1680;
        }
    }
    ctx->pc = 0x1D1678u;
    // 0x1d1678: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D1678u;
    {
        const bool branch_taken_0x1d1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1678) {
            ctx->pc = 0x1D1788u;
            goto label_1d1788;
        }
    }
    ctx->pc = 0x1D1680u;
label_1d1680:
    // 0x1d1680: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d168c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1694: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d1694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d1698: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d169c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d169cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d16a0: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d16a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d16a4: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d16a4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d16a8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d16b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d16b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d16b8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d16b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d16bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d16c0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d16c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16c8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16cc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d16d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d16d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d16dc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d16dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d16e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d16e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d16e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d16e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d16ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16f0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D16F0u;
    {
        const bool branch_taken_0x1d16f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16f0) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D16F8u;
label_1d16f8:
    // 0x1d16f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1700: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1704: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d170c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1d170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x1d1710: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d1710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d1714: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d171c: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1720: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d1720u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d1724: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d172c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1730: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1734: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d1734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d1738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d1738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d173c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d173cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d1740: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d1740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d1744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1748: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d1748u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d174c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1754: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1758: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d175c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d175cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d1760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d1764: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d1768: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d1768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d176c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1770: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d1770u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1774: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1d1774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1d1778: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d1778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d177c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d177cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1780: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D1780u;
    {
        const bool branch_taken_0x1d1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1780) {
            ctx->pc = 0x1D1810u;
            goto label_1d1810;
        }
    }
    ctx->pc = 0x1D1788u;
label_1d1788:
    // 0x1d1788: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d178c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1790: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1794: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d179c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x1d17a0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d17a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d17a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d17a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d17ac: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d17b0: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d17b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d17b4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d17b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d17bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d17c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d17c4: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d17c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d17c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d17c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d17cc: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1d17ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1d17d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d17d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d17d8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d17dc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d17dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d17e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d17e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d17e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d17ec: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d17ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d17f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d17f4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1d17f8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d17f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d17fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d17fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1800: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d1800u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1804: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1d1804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1d1808: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1d1808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1d180c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d180cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
label_1d1810:
    // 0x1d1810: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1d1810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1814: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1818: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1818u;
    {
        const bool branch_taken_0x1d1818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1818) {
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1820u;
    // 0x1d1820: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d1824: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1d1824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1d1828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d182c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1830: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1830u;
    {
        const bool branch_taken_0x1d1830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1830) {
            ctx->pc = 0x1D1874u;
            goto label_1d1874;
        }
    }
    ctx->pc = 0x1D1838u;
    // 0x1d1838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d183c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D183Cu;
    {
        const bool branch_taken_0x1d183c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d183c) {
            ctx->pc = 0x1D1874u;
            goto label_1d1874;
        }
    }
    ctx->pc = 0x1D1844u;
    // 0x1d1844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1848: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1848u;
    {
        const bool branch_taken_0x1d1848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1848) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1850u;
    // 0x1d1850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1850u;
    {
        const bool branch_taken_0x1d1850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1850) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1858u;
    // 0x1d1858: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1858u;
    {
        const bool branch_taken_0x1d1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1858) {
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1860u;
label_1d1860:
    // 0x1d1860: 0x36830008  ori         $v1, $s4, 0x8
    ctx->pc = 0x1d1860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
    // 0x1d1864: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1868: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1d1868u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d186c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D186Cu;
    {
        const bool branch_taken_0x1d186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d186c) {
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1874u;
label_1d1874:
    // 0x1d1874: 0x36840004  ori         $a0, $s4, 0x4
    ctx->pc = 0x1d1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
    // 0x1d1878: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1d1878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d187c: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1d187cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1d1880:
    // 0x1d1880: 0xa21711ef  sb          $s7, 0x11EF($s0)
    ctx->pc = 0x1d1880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 23));
    // 0x1d1884: 0xa61611f2  sh          $s6, 0x11F2($s0)
    ctx->pc = 0x1d1884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 22));
    // 0x1d1888: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x1d1888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d188c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d1890: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1d1890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1894: 0xa61111f6  sh          $s1, 0x11F6($s0)
    ctx->pc = 0x1d1894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d1898: 0xa21411f0  sb          $s4, 0x11F0($s0)
    ctx->pc = 0x1d1898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 20));
    // 0x1d189c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1d18a0: 0x2483dbc0  addiu       $v1, $a0, -0x2440
    ctx->pc = 0x1d18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x1d18a4: 0xae031210  sw          $v1, 0x1210($s0)
    ctx->pc = 0x1d18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 3));
    // 0x1d18a8: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x1d18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d18ac: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d18acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d18b0: 0x26031200  addiu       $v1, $s0, 0x1200
    ctx->pc = 0x1d18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1d18b4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d18b8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d18bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d18c0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1d18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1d18c4: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1d18c8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D18C8u;
    SET_GPR_U32(ctx, 31, 0x1D18D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D18C8u, 0x1D18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18D0u;
label_1d18d0:
    // 0x1d18d0: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1d18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d18d4: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x1d18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d18d8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1D18D8u;
    SET_GPR_U32(ctx, 31, 0x1D18E0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1D18D8u, 0x1D18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18E0u;
label_1d18e0:
    // 0x1d18e0: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1d18e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1d18e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d18e8: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x1d18e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d18ec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d18f0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d18f4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1d18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_1d18f8:
    // 0x1d18f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d18fc: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1900: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1d1900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1904: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x1D1904u;
    {
        const bool branch_taken_0x1d1904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1904) {
            ctx->pc = 0x1D1584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1584;
        }
    }
    ctx->pc = 0x1D190Cu;
    // 0x1d190c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D190Cu;
    {
        const bool branch_taken_0x1d190c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d190c) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D1914u;
    // 0x1d1914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1918: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d1918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d191c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d191cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d1920: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d1920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d1924: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d1928: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d192c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1d192cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_1d1930:
    // 0x1d1930: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d1930u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1934: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d1934u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d1938: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d1938u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d193c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d193cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1940: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d1940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d194c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d194cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1958: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1d1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d195c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1964u;
}
