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

// Function: Em00_R1_br_wait
// Address: 0x2d1210 - 0x2d16b8
void Em00_R1_br_wait_0x2d1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_br_wait_0x2d1210");
#endif

    switch (ctx->pc) {
        case 0x2d12b8u: goto label_2d12b8;
        case 0x2d1364u: goto label_2d1364;
        case 0x2d1394u: goto label_2d1394;
        case 0x2d1438u: goto label_2d1438;
        case 0x2d14ecu: goto label_2d14ec;
        case 0x2d1560u: goto label_2d1560;
        default: break;
    }

    ctx->pc = 0x2d1210u;

    // 0x2d1210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d1214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d1218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d121c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d121cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d1220: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2d1220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2d1224: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x2d1224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2d1228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d122c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d122cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d1230: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d1230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d1234: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1238: 0x1083011a  beq         $a0, $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x2D1238u;
    {
        const bool branch_taken_0x2d1238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1238) {
            ctx->pc = 0x2D16A4u;
            goto label_2d16a4;
        }
    }
    ctx->pc = 0x2D1240u;
    // 0x2d1240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1244: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1248: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2d1248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2d124c: 0x146000e3  bnez        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2D124Cu;
    {
        const bool branch_taken_0x2d124c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d124c) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1254u;
    // 0x2d1254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1258: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x2d1258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x2d125c: 0x146000df  bnez        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x2D125Cu;
    {
        const bool branch_taken_0x2d125c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d125c) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1264u;
    // 0x2d1264: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1268: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d126c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d126cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d1270: 0x146000da  bnez        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x2D1270u;
    {
        const bool branch_taken_0x2d1270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1270) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1278u;
    // 0x2d1278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d127c: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d1280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d1280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d1284: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2D1284u;
    {
        const bool branch_taken_0x2d1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1284) {
            ctx->pc = 0x2D14BCu;
            goto label_2d14bc;
        }
    }
    ctx->pc = 0x2D128Cu;
    // 0x2d128c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1290: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1294: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1298: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2d1298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2d129c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d12a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d12a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d12a4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d12a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d12ac: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d12acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d12b0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D12B0u;
    SET_GPR_U32(ctx, 31, 0x2D12B8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D12B0u, 0x2D12B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12B8u;
label_2d12b8:
    // 0x2d12b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D12B8u;
    {
        const bool branch_taken_0x2d12b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12b8) {
            ctx->pc = 0x2D133Cu;
            goto label_2d133c;
        }
    }
    ctx->pc = 0x2D12C0u;
    // 0x2d12c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d12c4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d12c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d12c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d12cc: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2D12CCu;
    {
        const bool branch_taken_0x2d12cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d12cc) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D12D4u;
    // 0x2d12d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d12d8: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d12dc: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d12e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d12e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d12e4: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d12e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d12ec: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d12f0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d12f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d12f4: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d12f8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d12fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1300: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d1300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d1304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d130c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d130cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1310: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2d1310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d1314: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1318: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d131c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1320: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1324: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1328: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d132c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1330: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1334: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2D1334u;
    {
        const bool branch_taken_0x2d1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1334) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D133Cu;
label_2d133c:
    // 0x2d133c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1344: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1348: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d134c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1350: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1354: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1358: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d135c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D135Cu;
    SET_GPR_U32(ctx, 31, 0x2D1364u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D135Cu, 0x2D1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1364u;
label_2d1364:
    // 0x2d1364: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1364u;
    {
        const bool branch_taken_0x2d1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1364) {
            ctx->pc = 0x2D1410u;
            goto label_2d1410;
        }
    }
    ctx->pc = 0x2D136Cu;
    // 0x2d136c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1370: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1374: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1378: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d137c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d137cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1380: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1384: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1388: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d138c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D138Cu;
    SET_GPR_U32(ctx, 31, 0x2D1394u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D138Cu, 0x2D1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1394u;
label_2d1394:
    // 0x2d1394: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1394u;
    {
        const bool branch_taken_0x2d1394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1394) {
            ctx->pc = 0x2D1410u;
            goto label_2d1410;
        }
    }
    ctx->pc = 0x2D139Cu;
    // 0x2d139c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13a0: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d13a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d13a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D13A8u;
    {
        const bool branch_taken_0x2d13a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d13a8) {
            ctx->pc = 0x2D1410u;
            goto label_2d1410;
        }
    }
    ctx->pc = 0x2D13B0u;
    // 0x2d13b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13b4: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d13b8: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d13bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d13bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d13c0: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d13c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13c8: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d13cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d13ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d13d0: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d13d4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d13d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13dc: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d13e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d13e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d13e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d13ec: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d13f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13f4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d13f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d13f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d13fc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1400: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1404: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1408: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d140c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d1410:
    // 0x2d1410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1414: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1418: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d141c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1420: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1424: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1428: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d142c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1430: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1430u;
    SET_GPR_U32(ctx, 31, 0x2D1438u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1430u, 0x2D1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1438u;
label_2d1438:
    // 0x2d1438: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D1438u;
    {
        const bool branch_taken_0x2d1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1438) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1440u;
    // 0x2d1440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1444: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1448: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d1448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d144c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D144Cu;
    {
        const bool branch_taken_0x2d144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d144c) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1454u;
    // 0x2d1454: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1458: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d145c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1460: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1464: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d146c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1470: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d1470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d1474: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1478: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d147c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1480: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d1480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d1484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d148c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d148cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1490: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d1494: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1498: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d149c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d14a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d14b4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D14B4u;
    {
        const bool branch_taken_0x2d14b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d14b4) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D14BCu;
label_2d14bc:
    // 0x2d14bc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x2d14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x2d14c0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d14c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d14c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d14c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d14c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14cc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d14d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14d4: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d14d8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d14dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d14e0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d14e4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D14E4u;
    SET_GPR_U32(ctx, 31, 0x2D14ECu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D14E4u, 0x2D14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14ECu;
label_2d14ec:
    // 0x2d14ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D14ECu;
    {
        const bool branch_taken_0x2d14ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d14ec) {
            ctx->pc = 0x2D1538u;
            goto label_2d1538;
        }
    }
    ctx->pc = 0x2D14F4u;
    // 0x2d14f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d14f8: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d14fc: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1504: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d150c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1510: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1514: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d1514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d151c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d151cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1520: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1524: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d152c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d152cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1534: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d1538:
    // 0x2d1538: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d153c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1544: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d154c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d1550: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1554: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1558: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1558u;
    SET_GPR_U32(ctx, 31, 0x2D1560u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1558u, 0x2D1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1560u;
label_2d1560:
    // 0x2d1560: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1560u;
    {
        const bool branch_taken_0x2d1560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1560) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D1568u;
    // 0x2d1568: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d156c: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1570: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d1574: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1574u;
    {
        const bool branch_taken_0x2d1574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1574) {
            ctx->pc = 0x2D15DCu;
            goto label_2d15dc;
        }
    }
    ctx->pc = 0x2D157Cu;
    // 0x2d157c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d157cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1580: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1584: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d158c: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d158cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1594: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1598: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d159c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d159cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d15a0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d15a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15a8: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d15ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d15b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d15b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d15b8: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2d15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d15bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d15c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d15c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d15c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d15cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d15d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d15dc:
    // 0x2d15dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d15e0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d15e4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2d15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2d15e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d15ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d15ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d15f0: 0x0  nop
    ctx->pc = 0x2d15f0u;
    // NOP
    // 0x2d15f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d15f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d15f8: 0x0  nop
    ctx->pc = 0x2d15f8u;
    // NOP
    // 0x2d15fc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2D15FCu;
    {
        const bool branch_taken_0x2d15fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d15fc) {
            ctx->pc = 0x2D1648u;
            goto label_2d1648;
        }
    }
    ctx->pc = 0x2D1604u;
    // 0x2d1604: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1608: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d160c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1610: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1614: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d161c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1620: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1628: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d162c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d162cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1630: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1634: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d163c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d163cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1644: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1648:
    // 0x2d1648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d164c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x2d164cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2d1650: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d1650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d1654: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1658: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1658u;
    {
        const bool branch_taken_0x2d1658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1658) {
            ctx->pc = 0x2D16A4u;
            goto label_2d16a4;
        }
    }
    ctx->pc = 0x2D1660u;
    // 0x2d1660: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1664: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1668: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d166c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1670: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1678: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d167c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d167cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1680: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d1684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1688: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d168c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1690: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1698: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d169c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d16a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d16a4:
    // 0x2d16a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d16a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d16a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d16acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d16b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D16B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D16B8u;
}
